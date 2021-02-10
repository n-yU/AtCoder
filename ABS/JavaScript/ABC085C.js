function main(input) {
   const args = input.split(' ');
   const N=parseInt(args[0],10), Y=parseInt(args[1], 10);
   var i, j, r1=-1, r2=-1;

   for(i=0; i<=N; i++)
    for(j=0; j<=N-i; j++)
        if(10000*i+5000*j+(N-i-j)*1000 === Y) {
            r1=i, r2=j;
            break;
        }
    
    console.log('%d %d %d', r1, r2, ((r1==-1) ? -1 : N-r1-r2));
}

main(require('fs').readFileSync('/dev/stdin', 'utf8'));