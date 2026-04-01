import discord #discord라는 외부 라이브러리를 불러온다
from bs4 import BeautifulSoup #bs4에 있는 BeautifulSoup를 불러온다
import requests #requests를 불러온다

def Scrape_lnfo(TagName): #함수 선언
    schetitle = []
    scheinfo = []

    #크롤링을 할 사이트의 링크를 변수에 넣어줌
    url = 'https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG'
    response = requests.get(url) #url을 이용하여 사이트에 요청을 보내고 가져와 변수에 넣어준다
    soup = BeautifulSoup(response.text, 'html.parser')
    #html.parser는 HTML을 파싱할때 사용하는 모듈로 가져온 사이트에서 html 데이터를 가져올 준비를 한다.
    info_container1 = soup.find(id_=TagName) #변수에 ~변수에 들어가있는 값과 같은 id태그를 찾아 넣어준다
    info_container2 = info_container1.find(class_='scheList') #변수에 scheList라는 클래스를 찾아 변수에 넣어준다
    schetitle.append(info_container2.find_all('dt')) #변수에 scheList안에서 dt라는 태그를 찾아 그 값을 넣어준다
    scheinfo.append(info_container2.find_all('strong')) #위랑 똑같이 변수에 strong의 값을 찾아 넣어준다
    #embed는 디스코드에서 사용하는 다양한 형태의 메세지를 보낼 수 있는 메세지 시스템입니다
    #가져온 학사정보의 데이터를 embed에 넣어줍니다
    embed=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
    embed.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
    #zip을 사용하는 이유는 두 리스트(titles와 infos)를 동시에 순회하면서 각 요소에 접근하기 위함입니다.
    #각각의 요소에 대한 정보를 for 루프를 통해 함께 다루기 위해 zip이 사용됩니다
    #zip을 사용하지 않고 각 리스트를 따로 순회한다면, 
    #인덱스를 이용하여 값을 가져와야 하기 때문에 코드가 불필요하게 복잡해질 수 있습니다
    for title, info in zip(schetitle, scheinfo):
        embed.add_field(name=title, value=info, inline=True)
    embed.set_footer(text="Python Bot")
    return embed #학사정보가 담긴 임베드를 돌려준다