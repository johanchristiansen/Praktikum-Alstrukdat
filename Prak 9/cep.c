void OddEvenList(List L, List *Odd, List *Even){
    List O,E;
    CreateEmpty(&O);
    CreateEmpty(&E);
    CreateEmpty(*(&Odd));
    CreateEmpty(*(&Even));
    address p = First(L);
    while(p!=Nil){
        if(Info(p)%2==0){
            InsVLast(&E,Info(p));       
        }
        else{
            InsVLast(&O,Info(p));
        }
        p=Next(p);
    }
    while(!IsEmpty(E)){
        InsVLast(*(&Even),Min(E));
        DelP (&E, Min(E));
    }
     while(!IsEmpty(O)){
        InsVLast(*(&Odd),Min(O));
        DelP (&O, Min(O));
    }
}