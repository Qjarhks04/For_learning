import discord

#bot의 토큰값을 변수에 넣어주었다 봇을 실행시키기 위해 반드시 필요한 봇의 고유번호이다
Token = 'MTE3MzkyNzYyODcyNjYxNjA5NQ.GAkkUX.OjW8tMbsQ0xVeg-5FvoEv_-uWokH7iL8P5GM4M'
#openai를 사용하기 위해 가져온 api키 값 입니다
# OPENAI_API_KEY = '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'
OPENAI_API_KEY = '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'
#openai에서 사용하기 위해 가져온 서버 아이디입니다
SERVER_IDS = [1173927986362335263]
#bot이 메세지를 보낼 채팅방의 고유아이디값이다
CHANNEL_ID = 1173927986362335266





























































































































































































































































def Scrape_Info(test):
    a = 0

embed1=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed1.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed1.add_field(name="01.01 (일)", value="신정", inline=True)
embed1.add_field(name="01.02 (월) ~ 01.13 (금)", value="2023-1학기 재입학 신청 기간", inline=True)
embed1.add_field(name="01.04 (수)", value="2학기 성적마감 확정", inline=True)
embed1.add_field(name="01.09 (월) ~ 01.12 (목)", value="정시 가군 면접·실기고사", inline=True)
embed1.add_field(name="01.13 (금) ~ 01.17 (화)", value="동계 계절학기 성적입력", inline=True)
embed1.add_field(name="01.16 (월) ~ 01.27 (금)", value="2023-1학기 복학신청 기간", inline=True)
embed1.add_field(name="01.17 (화) ~ 01.19 (목)", value="정시 나군 면접·실기고사", inline=True)
embed1.add_field(name="01.18 (수) ~ 01.19 (목)", value="동계 계절학기 성적열람 및 정정", inline=True)
embed1.add_field(name="01.20 (금)", value="동계 계절학기 성적마감 확정", inline=True)
embed1.add_field(name="01.21 (토) ~ 01.23 (월)", value="설날연휴", inline=True)
embed1.set_footer(text="Python Bot")

embed2=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed2.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed2.add_field(name="02.06 (월) ~ 02.10 (금)", value="2023-1학기 수강신청(재학, 복학, 재입학생)", inline=True)
embed2.add_field(name="02.16 (목)", value="2022학년도 전기 학위수여식", inline=True)
embed2.add_field(name="02.20 (월) ~ 02.24 (금)", value="재학생 등록 기간", inline=True)
embed2.add_field(name="02.20 (월) ~ 02.24 (금)", value="조기졸업 신청 기간", inline=True)
embed2.add_field(name="02.22 (수)", value="2023학년도 신입생 입학식 및 대학생활안내", inline=True)
embed2.add_field(name="02.23 (목)", value="2023-1학기 수강신청(신, 편입생)", inline=True)
embed2.add_field(name="02.24 (금) ~ 03.08 (수)", value="졸업이수학점 확인 기간", inline=True)
embed2.add_field(name="02.24 (금) ~ 03.08 (수)", value="수강신청 정정 기간(전체)", inline=True)
embed2.add_field(name="02.28 (화)", value="교원상견례 및 연수", inline=True)
embed2.set_footer(text="Python Bot")

embed3=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed3.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed3.add_field(name="03.01 (수)", value="삼일절", inline=True)
embed3.add_field(name="03.01 (수) ~ 03.15 (수)", value="2023-2학기 교원연구년 신청기간", inline=True)
embed3.add_field(name="03.02 (목)", value="제1학기 개시일 / 개강일(1학기)", inline=True)
embed3.add_field(name="03.16 (목) ~ 03.22 (수)", value="수강신청과목 철회기간", inline=True)
embed3.add_field(name="03.29 (수)", value="수업일수 1/4", inline=True)
embed3.add_field(name="03.31 (금)", value="학기개시 30일", inline=True)
embed3.set_footer(text="Python Bot")

embed4=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed4.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed4.add_field(name="04.03 (월) ~ 04.07 (금)", value="중간 강의평가 기간", inline=True)
embed4.add_field(name="04.24 (월)", value="수업일수 1/2", inline=True)
embed4.add_field(name="04.30 (일)", value="학기개시 60일", inline=True)
embed4.set_footer(text="Python Bot")

embed5=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed5.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed5.add_field(name="05.01 (월)", value="근로자의 날", inline=True)
embed5.add_field(name="05.05 (금)", value="어린이 날", inline=True)
embed5.add_field(name="05.15 (월) ~ 05.26 (금)", value="2023-2학기 전공변경, 전부(과) 신청기간", inline=True)
embed5.add_field(name="05.21 (일)", value="수업일수 3/4", inline=True)
embed5.add_field(name="05.27 (토)", value="부처님오신날", inline=True)
embed5.add_field(name="05.29 (월)", value="부처님오신날 대체공휴일", inline=True)
embed5.add_field(name="05.30 (화)", value="학기개시 90일", inline=True)
embed5.add_field(name="05.30 (화) ~ 06.02 (금)", value="하계 계절학기 수강신청 기간", inline=True)
embed5.set_footer(text="Python Bot")

embed6=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed6.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed6.add_field(name="06.06 (화)", value="현충일", inline=True)
embed6.add_field(name="06.07 (수) ~ 06.09 (금)", value="하계 계절학기 등록기간", inline=True)
embed6.add_field(name="06.08 (목)", value="지정보강일(월요일 수업)", inline=True)
embed6.add_field(name="06.14 (수) ~ 06.20 (화)", value="기말 강의평가 기간", inline=True)
embed6.add_field(name="06.14 (수) ~ 06.20 (화)", value="1학기 기말고사 기간", inline=True)
embed6.add_field(name="06.14 (수) ~ 06.22 (목)", value="부처님오신날 대체공휴일", inline=True)
embed6.add_field(name="06.20 (화)", value="종강일", inline=True)
embed6.add_field(name="06.21 (수)", value="하계방학 시작", inline=True)
embed6.add_field(name="06.21 (수) ~ 07.11 (화)", value="하계 계절학기", inline=True)
embed6.add_field(name="06.23 (금) ~ 06.29 (목)", value="1학기 성적열람", inline=True)
embed6.add_field(name="06.29 (목)", value="1학기 성적마감", inline=True)
embed6.set_footer(text="Python Bot")

embed7=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed7.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed7.add_field(name="07.03 (월) ~ 07.14 (금)", value="2023-2학기 재입학 신청기간", inline=True)
embed7.add_field(name="07.11 (화) ~ 07.13 (목)", value="하계 계절학기 성적입력", inline=True)
embed7.add_field(name="07.14 (금) ~ 07.18 (화)", value="하계 계절학기 성적열람", inline=True)
embed7.add_field(name="07.17 (월) ~ 07.28 (금)", value="2023-2학기 복학신청 기간", inline=True)
embed7.add_field(name="07.18 (화)", value="하계 계절학기 성적마감", inline=True)
embed7.set_footer(text="Python Bot")

embed8=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed8.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed8.add_field(name="08.07 (월) ~ 08.11 (금)", value="2학기 수강신청기간(재학, 복학, 재입학생)", inline=True)
embed8.add_field(name="08.15 (화)", value="광복절", inline=True)
embed8.add_field(name="08.17 (목)", value="2022학년도 후기 학위수여식", inline=True)
embed8.add_field(name="08.21 (월) ~ 08.25 (금)", value="재학생 등록기간", inline=True)
embed8.add_field(name="08.21 (월) ~ 08.25 (금)", value="조기졸업신청기간", inline=True)
embed8.add_field(name="08.21 (월) ~ 09.01 (금)", value="2학기 수강신청 정정기간", inline=True)
embed8.add_field(name="08.21 (월) ~ 09.01 (금)", value="졸업이수학점 확인기간", inline=True)
embed8.add_field(name="08.28 (월)", value="제2학기 개시일 / 개강일(2학기)", inline=True)
embed8.set_footer(text="Python Bot")

embed9=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed9.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed9.add_field(name="09.01 (금) ~ 09.15 (금)", value="2024-1학기 교원연구년 신청기간", inline=True)
embed9.add_field(name="09.11 (월) ~ 09.15 (금)", value="수강신청과목 철회기간", inline=True)
embed9.add_field(name="09.20 (수) ~ 09.21 (목)", value="진리축전", inline=True)
embed9.add_field(name="09.25 (월) ~ 10.06 (금)", value="중간 강의평가 기간", inline=True)
embed9.add_field(name="09.26 (화)", value="학기개시 30일", inline=True)
embed9.add_field(name="09.26 (화)", value="수업일수 1/4", inline=True)
embed9.add_field(name="09.28 (목) ~ 09.30 (토)", value="추석연휴", inline=True)
embed9.set_footer(text="Python Bot")

embed10=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed10.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed10.add_field(name="10.02 (월)", value="임시공휴일", inline=True)
embed10.add_field(name="10.03 (화)", value="개천절", inline=True)
embed10.add_field(name="10.09 (월)", value="한글날", inline=True)
embed10.add_field(name="10.19 (목) ~ 10.21 (토)", value="수시 면접.실기고사(휴업일)", inline=True)
embed10.add_field(name="10.23 (월) ~ 10.25 (수)", value="수시 면접.실기고사(휴업일)", inline=True)
embed10.add_field(name="10.25 (수)", value="수업일수 1/2", inline=True)
embed10.add_field(name="10.26 (목)", value="학기개시 60일", inline=True)
embed10.set_footer(text="Python Bot")

embed11=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed11.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed11.add_field(name="11.01 (수)", value="개교기념일", inline=True)
embed11.add_field(name="11.13 (월) ~ 11.24 (금)", value="2024-1학기 전공변경, 전부(과) 신청기간", inline=True)
embed11.add_field(name="11.23 (목)", value="수업일수 3/4", inline=True)
embed11.add_field(name="11.25 (토)", value="학기개시 90일", inline=True)
embed11.add_field(name="11.27 (월) ~ 12.01 (금)", value="동계 계절학기 수강신청 기간", inline=True)
embed11.add_field(name="11.27 (월) ~ 12.01 (금)", value="기말 강의평가 기간", inline=True)
embed11.set_footer(text="Python Bot")

embed12=discord.Embed(title="백석대학교 학사일정", url="https://www.bu.ac.kr/web/3443/subview.do?enc=Zm5jdDF8QEB8JTJGdG90YWxTY2hkdWwlMkZ3ZWIlMkZ2aWV3LmRvJTNG", color=0x243cb2)
embed12.set_thumbnail(url="https://www.bu.ac.kr/sites/web/images/logo_w.png")
embed12.add_field(name="12.06 (수) ~ 12.08 (금)", value="동계 계절학기 등록 기간", inline=True)
embed12.add_field(name="12.18 (월) ~ 12.26 (화)", value="2학기 기말고사 기간", inline=True)
embed12.add_field(name="12.18 (월) ~ 01.02 (화)", value="2학기 성적입력 기간", inline=True)
embed12.add_field(name="12.25 (월)", value="기독탄신일", inline=True)
embed12.add_field(name="12.26 (화)", value="종강일", inline=True)
embed12.add_field(name="12.27 (수)", value="동계방학 시작", inline=True)
embed12.add_field(name="12.27 (수) ~ 01.17 (수)", value="동계 계절학기", inline=True)
embed12.set_footer(text="Python Bot")