    0 rem *** odd scales ***
    1 rem *** ron bumblefoot thal ***
    2 rem *** (mid 80's) ***
    9 printchr$(14),chr$(8),"{clr}{wht}":poke53280,.:poke53281,.
   10 dimq1(13),q2(13):fori=1to13:reada,b:q1(i)=a:q2(i)=b:next
   11 dimq$(13):fori=1to13:readq$(i):next
   12 s=54272:pokes+24,15:pokes+5,17:pokes+6,255:pokes+4,33
   25 forp8=1to1
   26 forp7=.to1
   27 forp6=.to1
   28 forp5=.to1
   29 forp4=1to1
   30 forp3=.to1
   31 forp2=.to1
   32 forp1=1to1
   35 pokes+1,q1(1):pokes,q2(1):print"{home}"tab(p1)q$(1);:gosub500
   36 pokes+1,q1(2+p2):pokes,q2(2+p2):print"{home}"tab(5+p2)q$(2+p2);:gosub500
   37 pokes+1,q1(4+p3):pokes,q2(4+p3):print"{home}"tab(9+p3)q$(4+p3);:gosub500
   38 pokes+1,q1(6):pokes,q2(6):print"{home}"tab(13)q$(6);:gosub500
   39 pokes+1,q1(7+p5):pokes,q2(7+p5):print"{home}"tab(17+p5)q$(7+p5);:gosub500
   40 pokes+1,q1(9+p6):pokes,q2(9+p6):print"{home}"tab(21+p6)q$(9+p6);:gosub500
   41 pokes+1,q1(11+p7):pokes,q2(11+p7):print"{home}"tab(25+p7)q$(11+p7);:gosub500
   42 pokes+1,q1(13):pokes,q2(13):print"{home}"tab(29+p8)q$(13);:gosub500
   43 pokes+1,q1(11+p7):pokes,q2(11+p7):print"{home}"tab(25+p7)q$(11+p7);:gosub500
   44 pokes+1,q1(9+p6):pokes,q2(9+p6):print"{home}"tab(21+p6)q$(9+p6);:gosub500
   45 pokes+1,q1(7+p5):pokes,q2(7+p5):print"{home}"tab(17+p5)q$(7+p5);:gosub500
   46 pokes+1,q1(6):pokes,q2(6):print"{home}"tab(13)q$(6);:gosub500
   47 pokes+1,q1(4+p3):pokes,q2(4+p3):print"{home}"tab(9+p3)q$(4+p3);:gosub500
   48 pokes+1,q1(2+p2):pokes,q2(2+p2):print"{home}"tab(5+p2)q$(2+p2);:gosub500
   49 pokes+1,q1(1):pokes,q2(1):print"{home}"tab(p1)q$(1);:gosub500
   50 print"{down}{down}{down}{down}??":pokes+4,0
   51 geta$:ifa$=""then51
   52 gosub502:pokes+4,33
   99 next:next:next:next:next:next:next:next
  100 gosub501:goto25
  500 foraa=.to49:next:return
  502 foraa=.to99:next:print"{clr}":return
 1000 data 16,195,17,195,18,209,19,239,21,31,22,96,23,181,25,30
 1001 data 26,156,28,49,29,223,31,165,33,135
 1002 data "P1","m2","M2","m3","M3","P4","o5","P5","m6","M6","m7","M7","P8"
