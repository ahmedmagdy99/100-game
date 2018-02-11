sum=0
counter=0
print("this is 100 game , players enter number from 1 to 10 only ")
while sum<100:
    while counter==0:
        player_1=int(input("Player one: "))
        if (player_1<1 or player_1>10):
            print("please enter a number from 1 to 10 only")
        else:
            break
    sum=sum+player_1
    if sum>100:
        while (True):
            print ("choose a correct number ")
            sum = sum - player_1
            player_1=int(input("Player one: "))
            sum = sum + player_1
            if (sum<=100):
                break        
    if (sum==100):
                print("the winner is player one")
                continue
    print("sum= ",sum)
    while counter==0:
        player_2=int(input("Player two: "))
        if(player_2<1 or player_2>10):
            print("please enter a number from 1 to 10 only")
        else:
            break
    sum=sum+player_2
    if sum>100:
        while (True):
            print ("choose a correct number ")
            sum = sum - player_2
            player_2=int(input("Player two: "))
            sum =sum + player_2
            if (sum<=100):
                break        
    if (sum==100):
                print("the winner is player two")
                continue
    print("sum= ",sum)
    



            
            
            
        
    

        
        
    
    
    
