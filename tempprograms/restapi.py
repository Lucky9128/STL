import requests

name = "UEFA Champions League"
year = 2011
# q1 = 

winqry = "https://jsonmock.hackerrank.com/api/football_competitions?name="+name+"&year="+str(year)

winreq = requests.get(winqry)
# print(winreq.json())
team = (winreq.json()['data'])[0]['winner']
print(team)



q1 = "https://jsonmock.hackerrank.com/api/football_matches?competition=UEFA%20Champions%20League&year="+str(year)+"&team1="+team+"&page="
q2 = "https://jsonmock.hackerrank.com/api/football_matches?competition=UEFA%20Champions%20League&year="+str(year)+"&team2="+team+"&page="
resp = requests.get(q1+"1")
ttl =0
turn = resp.json()['total_pages']
print("Number of pages = "+str(turn))
for i in range(1,turn+1):
    resp = requests.get(q1+str(i))
    matchlist = resp.json()['data']
    for j in matchlist:
            ttl += int(j['team1goals'])
print(ttl)
resp = requests.get(q2+"1")
turn = resp.json()['total_pages']
print("Number of pages = "+str(turn))
ttl2=0
for i in range(1,turn+1):
    resp = requests.get(q2+str(i))
    matchlist = resp.json()['data']
    for j in matchlist:
            ttl2 += int(j['team2goals'])
print(ttl2)
print(ttl+ttl2)
# print(len(matchlist))