function main(input) {
   const args = input.split('\n');
   const A = parseInt(args[0], 10);
   const B = parseInt(args[1], 10); 
   const C = parseInt(args[2], 10); 
   const X = parseInt(args[3], 10);
   var c=0,i,j,k;

   for(i=0; i<=A; i++)
     for(j=0; j<=B; j++)
       for(k=0; k<=C; k++)
        if(500*i+100*j+50*k === X)
          c++;
    
    console.log(c);
}

main(require('fs').readFileSync('/dev/stdin', 'utf8'));