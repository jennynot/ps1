

// determine numbers of quarters, dimes, nickles and cents

    int totalq = 0;
    int totald = 0;
    int totaln = 0;
    int totalc = 0;

    if(numq>0)
    {
        totalq = numq;
    }
    else
    {   
        totalq = 0;
    }
    
    if(numd>0)
    {
        totald = numd;
    }
    else
    {   
        totald = 0;
    }
    
    if(numn>0)
    {
        totaln = numn;
    }
    else
    {   
        totaln = 0;
    }
    
    if(numc>0)
    {
        totalc = numc;
    }
    else
    {   
        totalc = 0;
    }    
    
    int totalcoins = totalq + totald + totaln + totalc;

// Step 3: display the results to the user

    printf("%i", totalcoins);
    printf("\n");
}        
