import discord #discord를 불러온다
from discord.ext import commands, tasks #discord.ext에 있는 commands tasks를 불러옴
import random # random을 불러온다
from BotToken import * #BotToken에 있는 모든 것을 불러온다
from Embed import * #Embed에 있는 모든 것을 불러온다.
from discord.utils import get #discord.utils에 있는 get을 불러온다.
from discord.ui import Button, View #discord.ui에 있는 Button, View을 불러온다.
from user import * #user에 있는 모든 것을 불러온다.
from Button import * #button에 있는 모든 것을 불러온다.
from game import * #game에 있는 모든 것을 불러온다.
from PjCrawling import * #PjCrawling에 있는 모든 것을 불러온다.
import openai #openai를 불러온다
import re #re를 불러온다
from discord import option #discord에서 option을 불러온다

#10월 27일부터 디스코드 API v8 버전 아래의 
#버전을 사용하는 모든 API에도 해당 Whitelist Gateway Intent가 도입되었습니다.
#그래서 이 코드를 넣지 않으면 봇이 작동하지 않도록 변경되었습니다
#intents에 discord.Intents를 기본값으로 모두 넣는다는 의미입니다
#디스코드에서 사용자들의 정보를 불러오기 위해 필요한 것으로 알고 있습니다
intents = discord.Intents.default()
#봇이 메시지를 사용하기 위해서는 밑에 있는 코드를 true로 하여야 합니다
intents.message_content = True
#변수에 봇의 명령어를 !로, 위에 선언한 intents를 넣어줍니다
#봇에게 말할때 앞에 !를 붙이면 봇이 그 말을 인식하게 해줍니다
client = commands.Bot(command_prefix='!', intents=intents)
openai.api_key = OPENAI_API_KEY #OPENAI_API_KEY의 값을 변수에 넣어준다
history = dict() #openai에서 말을 이어가기 위하여 전에 하던 대화를 저장하는 용도로 사용하는 딕셔너리이다


#async 와 await는 파이썬에서 지원하는 비동기코드로
#비동기식 코드는 언어가 프로그램에게 코드의 특정 지점에서 
#다른 작업이 다른 곳에서 끝날 때까지 기다려야 함을 선언하는 방법을 가지고 있음을 의미한다.
#ctx는 Discord.py 라이브러리에서 자주 사용되는 이름으로, 
#commands.Context 클래스의 인스턴스를 나타냅니다. 
#Discord.py는 Discord API와 상호 작용하는 봇을 만들기 위한 Python 라이브러리입니다.
#commands.Context는 명령어가 실행될 때 컨텍스트 정보를 포함하는 클래스로, 
#다양한 정보 및 기능을 제공합니다. 명령어의 실행에 필요한 정보, 
#사용자의 메시지, 채널, 서버 등에 대한 정보를 ctx를 통해 얻을 수 있습니다.

# @client.event는 특정 이벤트가 발생할 경우에 실행하라는 의미입니다
@client.event
async def on_ready(): #bot이 준비가 되면 실행하는 함수
    print('Login...') #터미널에 출력합니다
    #f {}는 f_string이라는 것인데 파이썬의 표현식을 사용할 수 있게 해줍니다
    #문자열 안에 변수같은 것을 넣어서 사용할 수 있게 해줍니다
    print(f'{client.user}에 로그인하였습니다.') #어떤 봇에 로그인하였는지 봇의 이름과 코드가 뜹니다
    print(f'ID: {client.user.name}') # 로그인한 봇의 이름만 뜹니다
    # 봇의 상태를 온라인으로 설정하고 봇이 무엇을 하고 있는지 알려주는 코드입니다
    await client.change_presence(status=discord.Status.online, activity=discord.Game('Python Project, !도움'))
 
@client.command(name='안녕') # 봇이 명령어를 감지하면 작동하게 하는 코드입니다 명령어는 name에 넣어줍니다
async def Hello(ctx): #위에 명령어와 동일하면 실행하는 함수
    await ctx.send(f'안녕하세요 {ctx.message.author.mention}님') #메세지를 보냅니다

@client.command(name='도움') 
async def Help(ctx):
    #embed는 디스코드에서 사용하는 다양한 형태의 메세지를 보낼 수 있는 메세지 시스템입니다
    embed=discord.Embed(title="Python Project", description="반갑습니다 저는 Python으로 개발되었습니다", color=0xe5f50a)
    embed.set_thumbnail(url="https://cdn.discordapp.com/attachments/1173927986362335266/1175404728755179561/bot.png?ex=656b1bf5&is=6558a6f5&hm=3b4dbdeeac3d8e14504e9b247a4a421e514a1e129c9092ee136ca837352d7d1e&")
    embed.add_field(name="!안녕", value="인사를 한다", inline=True)
    embed.add_field(name="!메뉴추천", value="메뉴를 추천해준다", inline=True)
    embed.add_field(name="!회원가입", value="회원가입을 한다", inline=True)
    embed.add_field(name="!내정보", value="내 회원정보를 확인한다", inline=True)
    embed.add_field(name="!송금 @user money", value="다른 회원유저에게 돈을 송금한다", inline=True)
    embed.add_field(name="!홀 (올인, money)", value="돈을 걸고 게임을 한다", inline=True)
    embed.add_field(name="!짝 (올인, money)", value="돈을 걸고 게임을 한다", inline=True)
    embed.add_field(name="!틱택토 @user1, @user2", value="2명의 유저가 서로 틱택토 게임을 한다", inline=True)
    embed.add_field(name="!학사일정", value="백석대학교 학사일정을 불러온다", inline=True)
    embed.add_field(name="!chat ~", value="openai를 이용하여 ai에게 물어본다", inline=True)
    embed.add_field(name="!image ~", value="openai가 이미지를 생성해준다", inline=True)
    embed.set_footer(text="Team 6")
    await ctx.send(embed=embed) #설정한 embed를 메세지로 보냅니다

#밑의 코드는 학사일정을 실행하면 디스코드에 나오는 버튼을 구현하기 위하여 작성한 코드들입니다
@client.command(name='학사일정') #interaction은 discord.py에서 button에 사용하는 상호작용에 대한 처리를 하는 매개변수입니다.
async def sdbt(ctx): #밑에 함수들은 각각 달 또는 년도에 맞는 버튼을 구현하는 함수입니다. 
    async def button_callback1(interaction): #1월
        Scrape_Info('monthArea1')
        await ctx.send(embed=embed1, view=view)
    async def button_callback2(interaction): #2월
        Scrape_Info('monthArea2')
        await ctx.send(embed=embed2, view=view)
    async def button_callback3(interaction): #3월
        Scrape_Info('monthArea3')
        await ctx.send(embed=embed3, view=view)
    async def button_callback4(interaction): #4월
        Scrape_Info('monthArea4')
        await ctx.send(embed=embed4, view=view)
    async def button_callback5(interaction): #5월
        Scrape_Info('monthArea5')
        await ctx.send(embed=embed5, view=view)
    async def button_callback6(interaction): #6월
        Scrape_Info('monthArea6')
        await ctx.send(embed=embed6, view=view)
    async def button_callback7(interaction): #7월
        Scrape_Info('monthArea7')
        await ctx.send(embed=embed7, view=view)
    async def button_callback8(interaction): #8월
        Scrape_Info('monthArea8')
        await ctx.send(embed=embed8, view=view)
    async def button_callback9(interaction): #9월
        Scrape_Info('monthArea9')
        await ctx.send(embed=embed9, view=view)
    async def button_callback10(interaction): #10월
        Scrape_Info('monthArea10')
        await ctx.send(embed=embed10, view=view)
    async def button_callback11(interaction): #11월
        Scrape_Info('monthArea11')
        await ctx.send(embed=embed11, view=view)
    async def button_callback12(interaction): #12월
        Scrape_Info('monthArea12')
        await ctx.send(embed=embed12, view=view)
    
    #설정된 버튼 변수에 버튼을 누르면 실행되게 하는 버튼 모듈을 넣어줍니다
    button1.callback = button_callback1
    button2.callback = button_callback2
    button3.callback = button_callback3
    button4.callback = button_callback4
    button5.callback = button_callback5
    button6.callback = button_callback6
    button7.callback = button_callback7
    button8.callback = button_callback8
    button9.callback = button_callback9
    button10.callback = button_callback10
    button11.callback = button_callback11
    button12.callback = button_callback12

    #이 밑은 이제 설정된 버튼을 디스코드에 보여주기 위해 view라는 디스코드 버튼 모듈을 설정해준다
    view = View()
    view.add_item(button1)
    view.add_item(button2)
    view.add_item(button3)
    view.add_item(button4)
    view.add_item(button5)
    view.add_item(button6)
    view.add_item(button7)
    view.add_item(button8)
    view.add_item(button9)
    view.add_item(button10)
    view.add_item(button11)
    view.add_item(button12)

    #디스코드에 보냄
    await ctx.send(embed=embed, view=view)

#메뉴리스트
menuName = ['마라탕', '삼겹살', '라면', '국밥',
         '햄버거', '피자', '보쌈', '족발']
#메뉴 사진 url
menuImg = ['https://gomean.co.kr/wp-content/uploads/2023/08/gm-mara-soup-main.jpg', 
         'https://i.ytimg.com/vi/zVZG6mC42_I/hqdefault.jpg', 
         'https://www.kmedia-news.com/news/photo/202304/1940_1367_4032.jpg', 
         'https://health.chosun.com/site/data/img_dir/2023/02/21/2023022101075_0.jpg',
         'https://health.chosun.com/site/data/img_dir/2023/06/12/2023061201327_0.jpg', 
         'https://www.7thpizza.com/files/MENU/3F6493546AEC446B980E975410DFB1EB.jpg', 
         'https://i.ytimg.com/vi/R9XHCBRhztY/maxresdefault.jpg', 
         'https://www.깐깐한족발.com/img/main/12/bbq_food.png']

@client.command(name='메뉴추천')
async def 메뉴(ctx):
    choiceNum = 0 #변수 선언 및 초기화
    #choiceNum에 0부터 menu1의 길이 -1 에 해당하는 값의 수까지 랜덤으로 선택하여 넣어줍니다
    choiceNum = random.randint(0, len(menuName)-1) # 0 ~ 7
    #embed는 디스코드에서 사용하는 다양한 형태의 메세지를 보낼 수 있는 메세지 시스템입니다
    embed=discord.Embed(color=0xffffff)
    embed.set_thumbnail(url=menuImg[choiceNum])
    embed.add_field(name="메뉴 추천", value=menuName[choiceNum], inline=False)
    await ctx.send(embed=embed) #설정한 embed를 메세지로 보냅니다


#여기서 사용하는 print는 모두 터미널에 그 값을 출력합니다.

#회원가입 기능
@client.command(name='회원가입')
async def Join(ctx):
    print("회원가입이 가능한지 확인합니다.")
    #checkUser라는 함수에 유저의 이름과 아이디값을 보내고 돌아온 값을 왼쪽 변수에 값을 가져옵니다
    userExistance, userRow = checkUser(ctx.author.name, ctx.author.id)
    #반환되는 값이 True, False이기 때문에 True면 if문을 실행하고
    #False일 경우에 else문을 실행합니다
    if userExistance:
        print("DB에서 ", ctx.author.name, "을 찾았습니다.")
        print("------------------------------\n")
        await ctx.send("이미 가입하셨습니다.") #회원정보가 있을경우 이미 가입했다는 문구가 출력된다.
    else:
        print("DB에서 ", ctx.author.name, "을 찾을 수 없습니다")
        print("")

        #signup이라는 함수에 유저의 이름과 유저 아이디를 보냅니다
        #signup은 유저정보를 엑셀(데이터베이스)에 저장하는 코드입니다.
        signup(ctx.author.name, ctx.author.id) 

        print("회원가입이 완료되었습니다.")
        print("------------------------------\n")
        await ctx.send("회원가입이 완료되었습니다.") #회원가입이 완료되었다고 출력해줍니다.

@client.command(name='리셋')
async def reset(ctx): #리셋기능은 테스트할때 매번 엑셀파일을 초기화를 하기 귀찮아서 만든 기능입니다
    delete() #delete라는 함수를 실행합니다

@client.command(name='내정보')
async def Info(ctx):
    #checkUser라는 함수에 유저의 이름과 아이디값을 보내고 돌아온 값을 왼쪽 변수에 값을 가져옵니다
    userExistance, userRow = checkUser(ctx.author.name, ctx.author.id)

    #반환되는 값이 True, False이기 때문에 False면 if문을 실행하고
    #True일 경우에 else문을 실행합니다
    #not이 들어가기 떄문에 반대의 값일떄 정상적으로 실행합니다
    if not userExistance:
        print("DB에서 ", ctx.author.name, "을 찾을 수 없습니다")
        print("------------------------------\n")
        await ctx.send("회원가입 후 자신의 정보를 확인할 수 있습니다.")
    else:
        #level, money변수에 userInfo함수에 userRow값을 보내서 나온 값을 넣어줍니다
        level, money = userInfo(userRow)
        print("------------------------------\n")
        embed = discord.Embed(title="유저 정보", description = ctx.author.name, color = 0x62D0F6)
        embed.add_field(name = "레벨", value = level)
        embed.add_field(name = "보유 자산", value = money, inline = False)
        #가져온 유저의 이름, 레벨, 돈을 임베드 형태로 보내준다
        await ctx.send(embed=embed)

#money는 명령어를 입력했을때 거기에 속하는 금액을 가져온다
#예를 들어 !홀 올인 이렇게 입력시 money값에는 올인이 들어간다
@client.command(name='홀')
async def game1(ctx, money): 
    #checkUser라는 함수에 유저의 이름과 아이디값을 보내고 돌아온 값을 왼쪽 변수에 값을 가져옵니다
    userExistance, userRow = checkUser(ctx.author.name, ctx.author.id)
    #win변수에 gamble()함수의 결과값을 넣어준다
    #gamble()함수는 True, False의 값만 반환한다
    win = gamble()
    result = "" #result 변수 선언
    betting = 0 #betting 변수 선언
    _color = 0x000000 #_color 변수 선언 앞에 0x는 16진수를 의미함
    if userExistance: #값이 True일 경우
        print("DB에서 ", ctx.author.name, "을 찾았습니다.")
        #유저의 이름과 userRow값을 getMoney함수에 보내서 나온 결과값을 cur_money에 넣습니다
        cur_money = getMoney(ctx.author.name, userRow)

        if money == "올인": #money가 올인과 같은 경우 실행
            betting = cur_money #betting에 cur_money값을 넣어준다
            if win: #win의 값이 True일 경우 실행
                result = "성공" #result에 성공을 넣어줌
                _color = 0x00ff56 #_color에 이 값을 넣어줌
                print(result)
                #modifyMoney함수에 유저이름, userRow값, int(1.0*bettin)의 값을 보내 함수를 실행한다
                #modifyMoney함수는 유저의 돈을 수정하는 함수
                #int(1.0*betting)은 betting의 값이 기존 보유 머니의 값이 이미 들어있기 때문에
                #1.0을 곱하면 기존 머니 + 기존 머니의 값이 서로 더해지면서 사실상 원래 돈의 2배가 되는 것과
                #같은 의미이다 오히려 2를 곱하면 기존 머니의 3배의 금액이 된다
                #예 - 50000 -> 150000이 된다 2를 곱하면
                #그리고 int를 해주는 이유는 결과가 소수로 나와도 정수로 변화해주기 떄문에다
                #예 - 10.5 -> 10
                modifyMoney(ctx.author.name, userRow, int(1.0*betting))
                #1.0은 부동 소수점 리터럴(literal)이며, int() 함수에 전달될 때 명시적으로 부동 소수점 타입임을 나타냅니다.
                #코드의 가독성을 높이고, 의도를 명확히 전달할 수 있습니다.
                #파이썬에서는 float 타입의 숫자와 int 타입의 숫자 간에 형변환이 자연스럽게 이루어집니다. 
                #따라서 명시적인 형변환이 필요하지 않을 수 있습니다.
                #그러나 명시적인 부동 소수점 표기는 코드를 읽는 사람에게 소수점 이하를 무시하고 정수로 변환하는 의도를 강조할 수 있습니다.

            else: #win의 값이 False일 경우 실행
                result = "실패" #result에 실패를 넣어줌
                _color = 0xFF0000 #_color에 이 값을 넣어줌
                print(result)
                #-int(betting)은 값에 -를 붙여 음수로 변환합니다
                #기존에 만원이 있었으면 보내는 값이 -만원이므로 보유 머니는 0이 됩니다
                modifyMoney(ctx.author.name, userRow, -int(betting))
            #게임의 최종 결과를 임베드로 출력합니다
            embed = discord.Embed(title = "게임 결과", description = result, color = _color)
            embed.add_field(name = "배팅금액", value = betting, inline = False)
            embed.add_field(name = "현재 자산", value = getMoney(ctx.author.name, userRow), inline = False)
            await ctx.send(embed=embed)
        #올인이 아닐경우 10보다 배팅금액이 커야합니다
        elif int(money) >= 500:
            if cur_money >= int(money): #배팅금액이 보유머니보다 작아야합니다
                betting = int(money) #money값을 betting에 넣어줍니다
                print("배팅금액: ", betting)
                print("")

                if win: #위의 설명과 같습니다
                    result = "성공"
                    _color = 0x00ff56
                    print(result)

                    modifyMoney(ctx.author.name, userRow, int(1.0*betting))

                else: #위의 설명과 같습니다
                    result = "실패"
                    _color = 0xFF0000
                    print(result)

                    modifyMoney(ctx.author.name, userRow, -int(betting))
                #위의 설명과 같습니다
                embed = discord.Embed(title = "게임 결과", description = result, color = _color)
                embed.add_field(name = "배팅금액", value = betting, inline = False)
                embed.add_field(name = "현재 자산", value = getMoney(ctx.author.name, userRow), inline = False)
                await ctx.send(embed=embed)

            else: #보유금액보다 배팅금액이 클 경우 실행
                print("돈이 부족합니다.")
                print("배팅금액: ", money, " | 현재자산: ", cur_money)
                await ctx.send("돈이 부족합니다. 현재자산: " + str(cur_money))
        else: #배팅금액이 500원보다 작을경우 실행
            print("배팅금액", money, "가 500보다 작습니다.")
            await ctx.send("500원 이상만 배팅 가능합니다.")
    else: #회원정보가 없을 경우 실행
        print("DB에서 ", ctx.author.name, "을 찾을 수 없습니다")
        await ctx.send("게임은 회원가입 후 이용 가능합니다.")

    print("------------------------------\n")

#money는 명령어를 입력했을때 거기에 속하는 금액을 가져온다
#예를 들어 !홀 올인 이렇게 입력시 money값에는 올인이 들어간다
@client.command(name='짝')
async def game2(ctx, money): 
    #checkUser라는 함수에 유저의 이름과 아이디값을 보내고 돌아온 값을 왼쪽 변수에 값을 가져옵니다
    userExistance, userRow = checkUser(ctx.author.name, ctx.author.id)
    #win변수에 gamble()함수의 결과값을 넣어준다
    #gamble()함수는 True, False의 값만 반환한다
    win = gamble()
    result = "" #result 변수 선언
    betting = 0 #betting 변수 선언
    _color = 0x000000 #_color 변수 선언 앞에 0x는 16진수를 의미함
    if userExistance: #값이 True일 경우
        print("DB에서 ", ctx.author.name, "을 찾았습니다.")
        #유저의 이름과 userRow값을 getMoney함수에 보내서 나온 결과값을 cur_money에 넣습니다
        cur_money = getMoney(ctx.author.name, userRow)

        if money == "올인": #money가 올인과 같은 경우 실행
            betting = cur_money #betting에 cur_money값을 넣어준다
            if win: #win의 값이 True일 경우 실행
                result = "성공" #result에 성공을 넣어줌
                _color = 0x00ff56 #_color에 이 값을 넣어줌
                print(result)
                #modifyMoney함수에 유저이름, userRow값, int(1.0*bettin)의 값을 보내 함수를 실행한다
                #modifyMoney함수는 유저의 돈을 수정하는 함수
                #int(1.0*betting)은 betting의 값이 기존 보유 머니의 값이 이미 들어있기 때문에
                #1.0을 곱하면 기존 머니 + 기존 머니의 값이 서로 더해지면서 사실상 원래 돈의 2배가 되는 것과
                #같은 의미이다 오히려 2를 곱하면 기존 머니의 3배의 금액이 된다
                #예 - 50000 -> 150000이 된다 2를 곱하면
                #그리고 int를 해주는 이유는 결과가 소수로 나와도 정수로 변화해주기 떄문에다
                #예 - 10.5 -> 10
                modifyMoney(ctx.author.name, userRow, int(1.0*betting))

            else: #win의 값이 False일 경우 실행
                result = "실패" #result에 실패를 넣어줌
                _color = 0xFF0000 #_color에 이 값을 넣어줌
                print(result)
                #-int(betting)은 값에 -를 붙여 음수로 변환합니다
                #기존에 만원이 있었으면 보내는 값이 -만원이므로 보유 머니는 0이 됩니다
                modifyMoney(ctx.author.name, userRow, -int(betting))
            #게임의 최종 결과를 임베드로 출력합니다
            embed = discord.Embed(title = "게임 결과", description = result, color = _color)
            embed.add_field(name = "배팅금액", value = betting, inline = False)
            embed.add_field(name = "현재 자산", value = getMoney(ctx.author.name, userRow), inline = False)
            await ctx.send(embed=embed)
        #올인이 아닐경우 10보다 배팅금액이 커야합니다
        elif int(money) >= 500:
            if cur_money >= int(money): #배팅금액이 보유머니보다 작아야합니다
                betting = int(money) #money값을 betting에 넣어줍니다
                print("배팅금액: ", betting)
                print("")

                if win: #위의 설명과 같습니다
                    result = "성공"
                    _color = 0x00ff56
                    print(result)

                    modifyMoney(ctx.author.name, userRow, int(1.0*betting))

                else: #위의 설명과 같습니다
                    result = "실패"
                    _color = 0xFF0000
                    print(result)

                    modifyMoney(ctx.author.name, userRow, -int(betting))
                #위의 설명과 같습니다
                embed = discord.Embed(title = "게임 결과", description = result, color = _color)
                embed.add_field(name = "배팅금액", value = betting, inline = False)
                embed.add_field(name = "현재 자산", value = getMoney(ctx.author.name, userRow), inline = False)
                await ctx.send(embed=embed)

            else: #보유금액보다 배팅금액이 클 경우 실행
                print("돈이 부족합니다.")
                print("배팅금액: ", money, " | 현재자산: ", cur_money)
                await ctx.send("돈이 부족합니다. 현재자산: " + str(cur_money))
        else: #배팅금액이 500원보다 작을경우 실행
            print("배팅금액", money, "가 500보다 작습니다.")
            await ctx.send("500원 이상만 배팅 가능합니다.")
    else: #회원정보가 없을 경우 실행
        print("DB에서 ", ctx.author.name, "을 찾을 수 없습니다")
        await ctx.send("게임은 회원가입 후 이용 가능합니다.")

    print("------------------------------\n")

#다른 유저에게 돈을 보내는 기능
@client.command(name='송금')
async def 송금(ctx, user: discord.User, money):
    print("송금이 가능한지 확인합니다.")
    #돈을 보내는 사람의 유저정보를 확인해서 변수에 넣어줍니다
    senderExistance, senderRow = checkUser(ctx.author.name, ctx.author.id)
    #돈을 받는 사람의 유저정보를 확인해서 변수에 넣어줍니다
    receiverExistance, receiverRow = checkUser(user.name, user.id)

    #변수의 값이 False일 경우 실행
    if not senderExistance:
        print("DB에서", ctx.author.name, "을 찾을수 없습니다")
        print("------------------------------\n")
        await ctx.send("회원가입 후 송금이 가능합니다.")
    #변수의 값이 False인 경우 실행
    elif not receiverExistance:
        print("DB에서 ", user.name, "을 찾을 수 없습니다")
        print("------------------------------\n")
        await ctx.send(user.name  + " 은(는) 등록되지 않은 사용자입니다.")
    else: #True인 경우 실행
        print("송금하려는 돈: ", money)
        #보내는 사람의 보유 금액을 가져와서 변수에 넣어줌
        s_money = getMoney(ctx.author.name, senderRow)
        #받는 사람의 보유 금액을 가져와서 변수에 넣어줌
        r_money = getMoney(user.name, receiverRow)
        #보내는 돈이 보유하고 있는 금액보다 작고, 보내는 금액이 0과 같이 않을 경우 실행
        if s_money >= int(money) and int(money) != 0:
            print("돈이 충분하므로 송금을 진행합니다.")
            print("")
            #remit함수에 정보를 보내 돈을 보낸다
            remit(ctx.author.name, senderRow, user.name, receiverRow, money)

            print("송금이 완료되었습니다. 결과를 전송합니다.")
            #실행 결과를 임베드로 출력한다
            embed = discord.Embed(title="송금 완료", description = "송금된 돈: " + money, color = 0x77ff00)
            embed.add_field(name = "보낸 사람: " + ctx.author.name, value = "현재 자산: " + str(getMoney(ctx.author.name, senderRow)))
            embed.add_field(name = "→", value = ":moneybag:")
            embed.add_field(name="받은 사람: " + user.name, value="현재 자산: " + str(getMoney(user.name, receiverRow)))          
            await ctx.send(embed=embed)
        elif int(money) == 0: #보내는 금액이 0일 경우 출력
            await ctx.send("0원은 보낼 수 없습니다")
        else: #보내는 돈이 보유 금액보다 많을경우 출력
            print("돈이 충분하지 않습니다.")
            print("송금하려는 돈: ", money)
            print("현재 자산: ", s_money)
            await ctx.send("돈이 충분하지 않습니다. 현재 자산: " + str(s_money))
        print("------------------------------\n")


#틱택톡게임
player1 = "" #유저1 변수 선언
player2 = "" #유저2 변수 선언
turn = "" #순서 변수 선언
gameOver = True #게임오버의 변수를 True로 설정
board = [] #board라는 리스트 선언
#게임에서 이길 수 있는 수의 결과를 리스트에 선언
winningConditions = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
]

@client.command(name='틱택토') #명령어 뒤에 태그되는 유저 2명을 각각 p1, p2에 넣는다
async def tictactoe(ctx, p1: discord.Member, p2: discord.Member):
    global counts #이 변수들을 전역변수로 선언한다
    global player1
    global player2
    global turn
    global gameOver

    if gameOver: #gameOver가 True일때 실행
        global board #전역변수로 선언
        #board리스트에 밑의 값을 넣어준다
        #:white_large_square:는 디스코드에서 사용되는 이모지 코드로
        #흰색 정사각형을 나타냅니다
        board = [":white_large_square:", ":white_large_square:", ":white_large_square:",
                 ":white_large_square:", ":white_large_square:", ":white_large_square:",
                 ":white_large_square:", ":white_large_square:", ":white_large_square:"]
        turn = ""
        #gameOver를 False로 바꿉니다
        #이유는 이미 게임이 시작된 상태에서 다시 시작되는 것을 방지하기 위하여 변경합니다
        gameOver = False 
        counts = 0
        #위에서 명령어로 받아온 p1, p2를 player1~2로 선언합니다
        player1 = p1
        player2 = p2

        # 보드 만들기
        line = "" #line을 ""로 선언
        #board의 길이만큼 반복하고 길이 값을 x에 넣어준다
        for x in range(len(board)): 
            #x의 값이 2또는 5또는 8과 같은때 실행한다
            if x == 2 or x == 5 or x == 8:
                #line에 line + " " + board[x](2, 5, 8)의 값을 넣어준다
                #여기서 " "에 칸을 띄우는 이유는 정사각형이 붙어서 나오지 않도록 하기 위함입니다
                line += " " + board[x]
                await ctx.send(line) #나온 값을 보내준다
                line = "" #line을 다시 ""로 변경
            else: #그렇지 않을 경우 밑의 코드를 실행
                line += " " + board[x]

        # 누가 먼저 하는지 결정
        num = random.randint(1, 2) #1, 2를 랜덤으로 생성하여 num에 넣어줌
        if num == 1: #num이 1이면 첫번째 유저의 순서로 시작합니다
            turn = player1
            await ctx.send("<@" + str(player1.id) + ">' 순서입니다")
        elif num == 2: #2일 경우 두번째 유저가 먼저 시작합니다
            turn = player2
            await ctx.send("<@" + str(player2.id) + ">' 순서입니다")
    else: #gameOver가 False일 경우 실행
        await ctx.send("이미 게임중인 플레이어가 있습니다, 게임을 끝내고 다시 시도해주세요")

@client.command(name='선택') #자신이 판을 선택하는 기능
async def place(ctx, pos: int): #!선택 3을 하면 3번째 판을 선택한다
    global turn #전역변수 선언
    global player1
    global player2
    global board
    global counts
    global gameOver

    if not gameOver: #위에 코드와 이어지기에 gameOver가 False일 경우 실행
        mark = "" #변수 선언
        if turn == ctx.author: #turn이 문자를 보낸 유저와 같은 경우 실행
            if turn == player1: #turn이 1번 유저이면 x이모지
                mark = ":regional_indicator_x:"
            elif turn == player2: #2번 유저이면 o이모지를 mark에 넣어줍니다
                mark = ":o2:"
            # 입력한 숫자의 값이 0보다 크고 10보다 작고 그리고 
            # 리스트board의 입력한 숫자 - 1의 값이 :white_large_square:와 같으면 실행
            if 0 < pos < 10 and board[pos - 1] == ":white_large_square:" :
                #board[pos - 1] 값에 mark를 넣어줌
                board[pos - 1] = mark
                counts += 1 #counts에 1을 추가

                # 보드 업데이트
                #위의 코드와 같으므로 설명은 생략하지만 이 코드를 다시 쓰는 이유는
                #바로 위 코드에서 유저가 선택한 숫자에 해당하는 판을 다른 이모지로 바꿨기 때문에
                #바뀐 보드로 업데이트 해주는 것이다
                line = ""
                for x in range(len(board)):
                    if x == 2 or x == 5 or x == 8:
                        line += " " + board[x]
                        await ctx.send(line)
                        line = ""
                    else:
                        line += " " + board[x]
                #checkWinner함수에 위에 선언한 winning리스트와 mark를 보내 결과를 낸다
                checkWinner(winningConditions, mark)
                print(counts)
                #gameOver가 True와 같으면 승리
                if gameOver == True:
                    await ctx.send(mark + " 가 승리하였습니다")
                #counts의 값이 9와 같거나 9보다 크면 무승부입니다
                elif counts >= 9:
                    gameOver = True #그리고 게임오버는 트루로 다시 변경
                    await ctx.send("무승부입니다.")

                # switch turns
                if turn == player1:
                    turn = player2
                elif turn == player2:
                    turn = player1
            else: # 1~9사이의 숫자에서 선택하지 않으면 실행 또는 이미 체크된 숫자를 선택시
                await ctx.send("1~9사이의 숫자에서 선택해주시고 이미 체크된 숫자는 체크가 불가합니다")
        else: # 상대 순서일때 하면 실행
            await ctx.send("상대 순서입니다.")
    else: #게임이 끝나지 않은 상태에서 하면 실행
        await ctx.send("!틱택토 명령을 사용하여 새로운 게임을 시작하세요")

#승리자를 알려주는 함수 2개의 외부값을 받아온다
def checkWinner(winningConditions, mark): 
    global gameOver  #전역변수 선언
    for condition in winningConditions: #winning리스트 만큼 반복
        #board에서 condition의 0~2의 값이 mark와 같으면 gameOver를 True로 변경
        if board[condition[0]] == mark and board[condition[1]] == mark and board[condition[2]] == mark:
            gameOver = True

@tictactoe.error #게임 에러시 실행
async def tictactoe_error(ctx, error):
    print(error)
    #이 에러는 명령어를 실행할 때 필요한 인자(argument)가 누락되었을 때 발생합니다
    if isinstance(error, commands.MissingRequiredArgument):
        await ctx.send("2명의 플레이어를 멘션해주세요")
    #이 에러는 명령어의 인자가 부적절한 형식이거나 유효하지 않을 때 발생합니다
    elif isinstance(error, commands.BadArgument):
        await ctx.send("반드시 유저를 멘션해주세요")

@place.error #게임 에러시 실행
async def place_error(ctx, error):
    if isinstance(error, commands.MissingRequiredArgument):
        await ctx.send("표시할 위치를 입력해주세요")
    elif isinstance(error, commands.BadArgument):
        await ctx.send("정수를 입력하세요")

#ai 기능
#함수는 세 개의 매개변수를 받습니다: user (사용자 식별자), text (사용자 입력 텍스트), 
#bot_answer (봇의 응답 텍스트)입니다.
def add_history(user: str, text: str, bot_answer: str):
    #먼저 사용자 식별자(user)가 history 딕셔너리에 있는지 확인합니다. 
    #만약 해당 사용자가 history에 없다면, 
    #빈 리스트([])를 할당하여 새로운 사용자의 대화 히스토리를 초기화합니다
    if not user in history:
        history[user] = []
    #pair라는 딕셔너리를 생성합니다. 
    #이 딕셔너리에는 봇에 대한 사용자의 입력(text)과 봇의 응답(bot_answer)이 저장됩니다.
    pair = dict(
        prompt=text,
        answer=bot_answer
    )
    #사용자의 대화 히스토리(history[user])에 새로운 pair를 추가합니다. 
    #그러나 최대 10개의 대화 기록만 유지하기 위해 리스트 슬라이싱을 사용하여 가장 최근 9개의 기록을 남기고, 
    #그 뒤에 새로운 pair를 추가합니다.
    history[user] = history[user][-9:] + [pair]

#특정 사용자(user)의 대화 히스토리를 조회하는 함수입니다
def get_history(user: str) -> list:
    #사용자(user)가 history 딕셔너리에 있는지 확인합니다. 
    #만약 해당 사용자가 히스토리에 없다면, 빈 리스트([])를 반환합니다
    if not user in history:
        return []
    #사용자가 히스토리에 있다면, 해당 사용자의 대화 히스토리를 반환합니다.
    return history[user]

#사용자의 이전 대화 히스토리를 가져와서, 
#그 내용과 새로운 사용자 입력을 합쳐서 대화 형식의 문자열로 반환하는 함수입니다.
def prompt_to_chat(user: str, prompt: str) -> str:
    #이전 대화 히스토리를 가져오기 위해 get_history 함수를 호출하고, 
    #해당 사용자(user)의 대화 기록을 previous 변수에 저장합니다
    previous = get_history(user)
    conversation = "" #대화를 저장할 빈 문자열(conversation)을 초기화합니다
    for chat in previous: #이전 대화 히스토리에 대해 반복합니다
        #각 대화를 문자열로 추가합니다. 
        #각 대화는 사용자의 입력과 봇의 응답이 Human과 Bot역할로 표시되는 형식입니다
        conversation += f"Human: {chat['prompt']}\n" \
                        f"Bot: {chat['answer']}\n"
    #이전 대화와 사용자의 새로운 입력(prompt)을 합쳐서 최종 대화를 만들고 반환합니다
    return conversation + "\n" + f"Human: {prompt}"

#봇의 응답을 정리하는 함수입니다
#이 함수를 사용하면 봇의 대답에서 불필요한 공백이 제거되고,
#답변이 더 깔끔하게 보이게 할 수 있습니다
def clean_bot_answer(answer: str) -> str:
    #문자열의 앞뒤에 있는 공백을 제거합니다. 
    #strip() 함수는 문자열의 시작과 끝에서 공백을 제거하는 역할을 합니다
    answer = answer.strip()
    #정규 표현식을 사용하여 문자열에서 특정 패턴을 찾아 제거합니다. 
    #이 패턴은 일반적으로 "어떤단어:"로 시작하는 부분을 의미합니다.
    #여기서 re.sub() 함수는 정규 표현식 패턴을 찾아 해당 부분을 빈 문자열로 대체하여 제거합니다
    answer = re.sub(r"^(\w.+\:) ", "", answer)
    return answer #answer 반환

#OpenAI의 GPT (Generative Pre-trained Transformer) 모델을 사용하여 대화를 생성하는 함수입니다. 
#주어진 사용자(user)와 사용자의 입력(prompt)을 기반으로 GPT 모델을 사용하여 봇의 응답을 생성하고, 
#이를 정리한 뒤 반환합니다
def chat_with_gpt(
    user: str,
    prompt: str,
    max_tokens: int = None,
    use_history: bool = None
) -> str:
    #max_tokens가 주어지지 않았거나 None인 경우, 기본값으로 200이 설정됩니다.
    if max_tokens is None:
        max_tokens = 200
    #use_history가 주어지지 않았거나 True인 경우, 
    #이전 대화 히스토리를 활용하여 사용자 입력을 조합합니다
    if use_history is None or use_history == True:
        #이전 대화 히스토리를 활용할지 여부에 따라 prompt_to_chat 함수를 사용하여 사용자 입력을 조합합니다
        prompt = prompt_to_chat(user, prompt)
    print('prompt:', prompt)
    bot_response = openai.Completion.create(
        #OpenAI의 GPT 모델 중 text-davinci-003 모델을 사용합니다
        model="text-davinci-003",
        #prompt에 기반하여 모델에 대화를 입력하고, 
        #max_tokens 및 temperature 등의 설정을 지정합니다
        prompt=prompt,
        max_tokens=max_tokens,
        temperature=0.25 #이 변수는 값이 낮을수록 봇이 대답의 정확도가 올라갑니다 반대로 높으면 정확도가 떨어짐
    )
    print('bot response:', bot_response)
    #clean_bot_answer 함수를 사용하여 정리된 봇의 응답을 얻습니다
    bot_answer = '\n'.join([clean_bot_answer(choice.text) for choice in bot_response.choices])
    #add_history 함수를 사용하여 사용자 입력과 봇의 정리된 응답을 대화 히스토리에 추가합니다
    add_history(user, prompt, bot_answer)
    #대화 히스토리에 추가된 정리된 봇의 응답을 반환합니다
    return bot_answer

#이 함수는 message 객체를 매개변수로 받습니다. Discord에서 채팅 메시지가 도착했을 때 이 함수가 호출됩니다
@client.event
async def aimc(message):
    #채팅 메시지를 보낸 사용자를 user 변수에 저장합니다
    user = message.author
    #만약 메시지를 보낸 사용자가 봇 자신이라면 함수를 종료합니다
    if user == client.user:
        return
    #채팅 메시지의 내용을 text 변수에 저장합니다
    text = message.content
    #사용자가 !chat으로 시작하는 명령을 입력했다면 아래 코드 블록을 실행합니다
    if text.startswith('!chat '):
        #사용자 입력에서 !chat 를 제외한 나머지 부분을 prompt 변수에 저장합니다
        prompt = text[6:]
        #GPT 모델을 사용하여 대화를 생성하는 chat_with_gpt 함수를 호출하고, 
        #생성된 대화를 Discord 채널로 전송합니다. 
        #만약 에러가 발생하면(try 블록에서 예외가 발생하면), 에러 메시지를 보냅니다
        try:  #try,except 예외처리를 하는 코드
            bot_answer = chat_with_gpt(user, prompt)
            #f는 Python에서 포매팅된 문자열(f-string)을 나타내는 특별한 표현입니다. 
            #f앞에 접두어를 붙인 문자열은 중괄호 {} 안에 변수나 표현식을 삽입하여 문자열을 동적(변할 수 있는)으로 구성할 수 있습니다
            await message.channel.send(f"> Your prompt is: {prompt}\nAnswer: {bot_answer}")
        except:
            await message.channel.send(f"> Your prompt is: {prompt}\nSorry, Failed to answer")

#slash_command 데코레이터를 사용하여 슬래시 명령을 정의합니다
#guild_ids 매개변수는 슬래시 명령을 어떤 Discord 서버(guild)에서 사용할 것인지를 지정합니다. 
#SERVER_IDS는 이 서버의 ID(식별자)를 나타내는 변수입니다
@client.slash_command(guild_ids=SERVER_IDS)
#option 데코레이터를 사용하여 슬래시 명령의 옵션을 설정합니다. 
#이 코드에서는 "prompt"라는 옵션을 정의하고, 
#이 옵션은 문자열(type=str) 형식이며, 
#사용자에게 프롬프트를 입력하라는 설명을 제공합니다
@option(
    name="prompt",
    type=str,
    description="프롬프트를 적어주세요."
)
#이 코드에서는 "max_length"라는 옵션을 정의하고, 
#이 옵션은 문자열(type=int) 형식이며, 
#사용자에게 AI가 출력할 수 있는 최대 답변 길이를 입력하라는 설명을 제공합니다.
@option(
    name="max_length",
    type=int,
    description="AI가 출력할 수 있는 최대 답변 길이. (기본값: 500)",
    required=False,
)
#이 코드에서는 "refresh"라는 옵션을 정의하고,
#이 옵션은 문자열(type=str) 형식이며,
#사용자에게 대화를 새로 시작할지 결정하라는 설명을 제공합니다.
@option(
    name="refresh",
    type=str,
    description="대화를 새로 시작합니다. (yes or no)",
    required=False,
)
#Discord.py에서 제공하는 context.defer() 함수를 호출하여 즉시 응답하지 않고, 
#명령이 처리되는 동안 사용자에게 "작업 중" 상태를 보여줍니다
async def chat(context, prompt: str, max_length: int, refresh: str):
    await context.defer()
    try:
        user = context.author #Discord.py에서 제공하는 context.author를 사용하여 명령을 호출한 사용자를 확인합니다
        #refresh가 비어있거나 'n'으로 시작하는 경우 use_history를 False로 설정하고, 
        #그렇지 않으면 True로 설정합니다. 이는 대화 히스토리를 갱신할지 여부를 결정합니다
        use_history = (refresh or 'no').startswith('n')
        #chat_with_gpt 함수를 호출하여 GPT 모델을 사용하여 대화를 생성하고, 생성된 대화를 bot_answer 변수에 저장합니다
        bot_answer = chat_with_gpt(user, prompt, max_tokens=max_length, use_history=use_history)
        #생성된 대화와 함께 원래의 사용자 입력 프롬프트를 Discord 채팅으로 전송합니다
        await context.respond(f"> Prompt: {prompt}\n{bot_answer}")
    except Exception as err:
        #예외가 발생하면 해당 예외를 처리하고, 에러 메시지를 Discord 채팅으로 전송합니다
        await context.respond(f"> Prompt: {prompt}\n" \
                              f"Sorry, failed to answer\n" \
                              f"> {str(err)}")

#OpenAI API를 사용하여 GPT 모델을 호출하고
def summarize_prompt(prompt: str):
    #모델(text-davinci-003) 을 생성합니다
    bot_response = openai.Completion.create(
        model="text-davinci-003",
        #rompt를 시작으로 하고, 추가적인 문장이 이어집니다
        prompt=prompt + "\n2000자 이하로 문장 요약",
        #최대 토큰 개수를 3000으로 설정합니다. 이는 생성된 요약의 길이가 최대 3000 토큰을 넘지 않도록 하는 역할을 합니다
        max_tokens=3000,
        #모델이 가능한 한 정확한 예측을 하도록 만듭니다. 온도가 0.0이면 모델이 가장 확률이 높은 토큰을 선택하게 됩니다
        temperature=0.0
    )
    #GPT 모델이 반환한 여러 선택지 중에서 텍스트를 추출하여 줄 바꿈으로 연결한 뒤 반환합니다
    return '\n'.join([choice.text for choice in bot_response.choices])

#디스코드에 임베드(embed)된 이미지를 생성하는 함수입니다.
def create_image_embed(title: str, description: str, url: str):
    #discord.Embed 클래스를 사용하여 임베드 객체를 생성합니다. 
    #title은 임베드의 제목을 나타내며, 
    #description은 해당 임베드의 설명을 나타냅니다
    embed = discord.Embed(
        title=title,
        description=description,
    )
    #set_thumbnail 메소드를 사용하여 임베드에 썸네일을 추가합니다. 
    #썸네일은 일반적으로 작은 이미지로 임베드의 왼쪽 상단에 표시됩니다. 
    #여기서 url은 썸네일 이미지의 URL을 나타냅니다
    embed.set_thumbnail(url=url)
    embed.set_image(url=url)
    return embed #생성된 임베드 객체를 반환합니다.

#밑의 옵션 코드는 위에 나왔던 옵션코드랑 구조가 똑같은데 서로 다른 상황에 사용하기만 합니다
@client.slash_command(guild_ids=SERVER_IDS)
@option(
    name="prompt",
    type=str,
    description="생성하고 싶은 이미지를 묘사해주세요."
)
@option(
    name="n",
    type=int,
    description="생성하고자 하는 이미지의 개수 (기본값: 1)",
    required=False,
)
@option(
    name="size",
    type=str,
    description="이미지 크기. 반드시 `256x256`, `512x512`, or `1024x1024` 중 하나." \
                "(기본값: 256x256)",
    required=False,
)
#디스코드에서 사용자의 이미지 생성 요청에 대한 응답으로, 
#OpenAI의 이미지 생성 API를 사용하여 이미지를 생성하고, 
#생성된 이미지를 Discord 채팅에 보내는 함수입니다
async def image(context, prompt: str, n: int, size: str):
    #Discord.py에서 제공하는 context.defer() 함수를 호출하여 즉시 응답하지 않고, 
    #명령이 처리되는 동안 사용자에게 "작업 중" 상태를 보여줍니다
    await context.defer()
    try:
        #콘솔에 이미지 생성에 사용된 프롬프트를 출력합니다
        print("Image prompt:", prompt)
        #OpenAI의 이미지 생성 API를 호출하고, 
        #주어진 프롬프트 (prompt), 생성할 이미지의 수 (n), 이미지 크기 (size) 등을 설정합니다
        response = openai.Image.create(
            prompt=prompt,
            n=n or 1,
            size=size or "256x256"
        ) #API 응답에서 이미지 데이터를 추출합니다
        data: list = response['data']
        #각 이미지에 대해 반복하면서, 이미지의 인덱스와 URL을 추출하여 Discord 임베드를 생성합니다
        for index, image in enumerate(data):
            title = f"Image generated #{index+1}"
            embed = create_image_embed(title, prompt, image['url'])
            #Discord 채팅에 생성된 이미지를 보여주는 임베드를 전송합니다
            await context.send('', embed=embed)
        #이미지 생성에 사용된 프롬프트를 Discord 채팅에 답장으로 전송합니다
        await context.respond(f"> Prompt: {prompt}")
    #예외가 발생하면 해당 예외를 처리하고, 에러 메시지를 Discord 채팅으로 전송합니다
    except Exception as err:
        await context.respond(f"> Prompt: {prompt}\n" \
                              f"Sorry, failed to answer\n" \
                              f"> {str(err)}")
 
client.run(Token)