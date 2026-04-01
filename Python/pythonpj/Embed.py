import discord

#학사일정 관련 임베드 설정이다
embed=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed.add_field(name="학사일정(2023)", value="월을 선택하세요", inline=True)
embed.set_footer(text="Python Bot")