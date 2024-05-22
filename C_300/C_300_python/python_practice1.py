# Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32
# Type "help", "copyright", "credits" or "license()" for more information.
# copyright
# Copyright (c) 2001-2023 Python Software Foundation.
# All Rights Reserved.

# Copyright (c) 2000 BeOpen.com.
# All Rights Reserved.

# Copyright (c) 1995-2001 Corporation for National Research Initiatives.
# All Rights Reserved.

# Copyright (c) 1991-1995 Stichting Mathematisch Centrum, Amsterdam.
# All Rights Reserved.
# x=1
# x
# 1
# y=2

# z=x+y
# print(z)
# 3

# x=1
# y=2

# z=x+y

# x=3.14

# print(z)
# 3
# print(x)
# 3.14
# #주석
# x=588
# b=1000000000 #10억
# e=1110

# MC=x*b*e
# print(MC)
# 652680000000000
# print("첫 번째 수를 입력하세요:")
# 첫 번째 수를 입력하세요:
# a=input()
# 3
# print("두 번째 수를 입력하세요:")
# 두 번째 수를 입력하세요:
# b=input()
# 34
# c=int(a)*int(b)

# print("a와 b를 곱한 값:")
# a와 b를 곱한 값:
# print(c)
# 102
# print("이름을 입력하세요:")
# 이름을 입력하세요:
# name=intpu()
# Traceback (most recent call last):
#   File "<pyshell#33>", line 1, in <module>
#     name=intpu()
# NameError: name 'intpu' is not defined. Did you mean: 'input'?
# name=input()
# 조수민
# print("나의 이름은"+name+"입니다.")
# 나의 이름은조수민입니다.
# print(`나의 이름은{name}입니다.`)
# SyntaxError: invalid syntax
# SyntaxError: invalid syntax
# SyntaxError: incomplete input
# x
# 588
# x=1
# x
# 1
# x=1
# y=2

# if x<y:
#     print("x가 y보다 작습니다.")
#     print(x)
#     print(y)
# elif x == y:
#     print("x가 y보다 같음.")
#     print(x)
#     print(y)
# else:
#     print("y가 큼")

# x가 y보다 작습니다.
# 1
# 2
# z=x+y
# z
# 3
# for i in range(1,5):
#     print(i)

# 1
# 2
# 3
# 4

# for i in range(5)
# SyntaxError: incomplete input
# for i in range(5):
#     print(i)

# 0
# 1
# 2
# 3
# 4

# for i in range(1,10,2):
#     print(i)

# 1
# 3
# 5
# 7
# 9

# for i in range(9,0,-3):
#     print(i)

# 9
# 6
# 3

# i=0
# while i<10:
#     print(i)
#     i+=1

# 0
# 1
# 2
# 3
# 4
# 5
# 6
# 7
# 8
# 9

# i=0
# while i<10:
#     print(i)
#     i++
    
# SyntaxError: multiple statements found while compiling a single statement

# x
# 1
# Korea="대한민국"
# IT='Google을 넘어 세계 강국으로'

# print(Korea)
# 대한민국
# print(IT)
# Google을 넘어 세계 강국으로
# Korea="""아름다운
# 우리나라
# 대한민국"""

# IT='''Google을 넘어
# 세계 강국으로'''

# print(Korea)
# 아름다운
# 우리나라
# 대한민국
# print(IT)
# Google을 넘어
# 세계 강국으로

# string = "You call it love"
# print(string[0:3])
# You
# print(string[:8])
# You call
# print(string[9:11])
# it
# print(string[12:])
# love

# y=2020
# m=12
# d=25
# christmas="Christmas - {0}년도 {1} 월  {2}일".format(y,m,d)
# print(christmas)
# Christmas - 2020년도 12 월  25일
# stra="Korea"
# strb="Japan"
# if stra>strb:
#     print(stra)

# Korea

# print("www.example.com".strip('cmowz.'))
# example
# print(" www.example.com".lstrip())
# www.example.com
# print("www.example.com".startswith('http'))
# False
# print("www.example.com".endswith('com.'))
# False
# print("www.example.com".endswith('com'))
# True
# gold=["박인비","오혜리","김소희","구본찬","장혜진","기보배","진종오","박상영","최미선","김우진","이승윤"]
# silver=["김종현","안바울","정보경"]
# iron=["차동민","이태훈","정경은","신승찬","김태훈","김현우","김정환","곽동현","윤진희","기보배"]

# print("금메달리스트:")
# 금메달리스트:
# print(gold)
# ['박인비', '오혜리', '김소희', '구본찬', '장혜진', '기보배', '진종오', '박상영', '최미선', '김우진', '이승윤']
# >>> print(silver)
# ['김종현', '안바울', '정보경']
# >>> print(gold[0])
# 박인비
# >>> gold[1]
# '오혜리'
# >>> print(iron[:5])
# ['차동민', '이태훈', '정경은', '신승찬', '김태훈']
# >>> medal=gold+silver+iron
# >>> print(medal)
# ['박인비', '오혜리', '김소희', '구본찬', '장혜진', '기보배', '진종오', '박상영', '최미선', '김우진', '이승윤', '김종현', '안바울', '정보경', '차동민', '이태훈', '정경은', '신승찬', '김태훈', '김현우', '김정환', '곽동현', '윤진희', '기보배']
# >>> len(gold)
# 11
# >>> #튜플
# >>> 
# >>> smartos=("Android OS","iOS","Windows10Mobile")
# >>> print(smartos)
# ('Android OS', 'iOS', 'Windows10Mobile')
# >>> market=1,2,3
# >>> Apple, Google, Microsoft=market
# >>> print(Apple)
# 1
# >>> print(Google)
# 2
# >>> print(Windows10Mobile)
# Traceback (most recent call last):
#   File "<pyshell#139>", line 1, in <module>
#     print(Windows10Mobile)
# NameError: name 'Windows10Mobile' is not defined
# >>> print(Microsoft)
# 3
# >>> sports={}
# >>> sports['양궁']='한국 종합 우승'
# >>> sports['축구']="아쉽지만..."sports['양궁']='한국 종합 우승'
# SyntaxError: invalid syntax
# >>> sports['펜싱']='한국 기력 상승'
# >>> sports['유도']='그래도 잘 했음'


# class Smartphone:

#     @staticmethod
#     def getOS():
#         return "Android"
    
#     @staticmethod
#     def getVersion():
#         return "Marshmallow"
    
#     @staticmethod
#     def getModel():
#         return "Galaxy Note 7"
    
# print(Smartphone.getOS())
# print(Smartphone.getVersion())
# print(Smartphone.getModel())

# phone=Smartphone()
# print(phone.getOS())

#클래스 상속과 오버라이딩 이해하기
# class Smartphone:
#     def __init__(self):
#         self.os='Android'
#         self.version='Marshmallow'
#         self.model='Galaxy Note 7'

#     def getOS(self):
#         return self.os
#     def getVersion(self):
#         return self.version
#     def getModel(self):
#         return self.model

# class iPhone(Smartphone): #클래스 선언 (Smartphone 클래스를 상속)
#     def __init__(self):
#         self.os='iOS'
#         self.version='iOS9'
#         self.model='iPhone6(s)'
#     def getOS(self):
#         return "OS:" + self.os #오버라이딩

# phone = iPhone()
# print(phone.getOS())
# print(phone.getVersion())
# print(phone.getModel())

# 역삼각형 출력하기
#Star 클래스 선언

# class Star:
#     def __init__(self):
#         self.star__from=10
#         self.star_to=0
#     def print_reversestar(self):
#         for star_num in range(self.star__from, self.star_to, -1):
#             for num in range(0,star_num,1):
#                 print('*', end='')
#             print('')

# star=Star()
# star.print_reversestar()


# 1에서 100까지의 합계 구하기
# Calc 클래스 선언
# class Calc:
    # def __init__(self, begin, end):
    #     self.begin=begin
    #     self.end=end
    #     self.hap=0
    # def sum(self):
    #     for value in range(self.begin, self.end+1,1):
    #         self.hap += value
    #     return self.hap
    # def sum_even(self):
    #     for value in range(self.begin+1,self.end+1, 2):
    #         self.hap += value
    #     return self.hap
    
# CalcTo 클래스 선언 (Calc 클래스 상속)
# class CalcTo(Calc):
#     def sum(self, to):
#         for value in range(self.begin, to+1,1):
#             self.hap += value
#         return self.hap

# calc = Calc(1,100)
# print(calc.sum())
# print(calc.sum_even())


# 30에서 50사이의 난수 만들기
# import random
# num = random.random()
# print(num)

# num=random.randint(30,50) #includes 50
# print(num)

# num=random.randrange(30,50,5)
# print(num)

#2진수와 16진수 연산하기 
# a=16
# print(a)

# bin_a=bin(a)
# hex_a=hex(a)

# print(bin_a)
# print(hex_a)

# shift_a= a>>2
# print(shift_a)

# shift_a=shift_a<<2
# print(shift_a)

# a=255
# print(a)
# and_a = a & 0b00001010
# print(and_a)
# print(bin(and_a))

# a=3
# or_a=a | 0b1100
# print(or_a)
# print(bin(or_a))

# a=0b1010
# xor_a=a^0b1010
# print(xor_a)
# print(bin(xor_a))

# 296) TCP/IP 소켓 서버/클라이언트 

# import socket
# print("파이썬 TCP/IP 서버 프로그래밍")

# HOST = '127.0.0.1'
# PORT = 10000

# server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# server.bind(HOST,PORT)
# server.listen(1)

# print("클라이언트 접속 대기 중...")
# client,ipinfo=server.accept()

# print("클라이언트 접속됨:",ipinfo)

# buff = client.recv(4096)
# print("데이터 수신:",repr(buff))

# client.close()
# server.close()

# HTTP 사용하기
# import http.client, urllib.parse

# #HTTP GET
# conn=http.client.HTTPSConnection("www.python.org")
# conn.request("GET","/")
# rl=conn.getresponse()
# print(rl.status, rl.reason)

# data1=rl.read() #전체 페이지 내용 읽기
# print(data1)

# #conn.request("GET","/")
# #rl=conn.getresponse()
# #while not rl.closed:
# #   print(rl.read(200)) #200bytes

# conn.close()

# #HTTP POST
# params = urllib.parse.urlencode({'@number':12524, '@type':'issue','@action':'show'})

# headers={"Content-type": "application/x-www-form-urlencoded",
#          "Accept": "text/plain"}

# conn=http.client.HTTPConnection("bugs.python.org")
# conn.request("POST", "", params,headers)
# response=conn.getresponse()
# print(response.status, response.reason)
# data=response.read()
# print(data)

# conn.close()

# 298) FTP 클라이언트 만들기
# from ftplib import FTP

# ftp=FTP('ftp.debian.org')
# ftp.login()

# ftp.cwd('debian')
# ftp.retrlines('LIST')

# ftp.quit()

# SMTP 메일 클라이언트 만들기
# import smtplib

# fromaddr='euncho171@naver.com'
# toaddrs='ceo@k2apps.kr'

# msg = ("From: %s\r\nTo:%s\r\n\r\n" %(fromaddr,",".join(toaddrs)))
# msg = msg + 'test mail'

# server = smtplib.SMTP('localhost')
# #server.set_debuglevel(1)
# server.sendmail(fromaddr, toaddrs, msg)
# server.quit()


# 300) MYSQL 데이터베이스 사용하기
import sqlite3

conn=sqlite3.connect('example.db')
c=conn.cursor()

#Create table
c.execute('''CREATE TABLE stocks
          (date text, tans text, symbol text, qty real, price real)''')


#Insert a row of data
c.execute("INSERT INTO stocks VALUES('2006-01-05','BUY','RHAT',100, 35.14)")

#Save (commit) changes
conn.commit()
conn.close()
