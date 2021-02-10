function main(input) {
    const args = input.split('\n');
    const N = parseInt(args[0], 10);
    const points = args.slice(1, N+1);

    const okTravel = points.every((p) => {
        var info = p.split(' ');
        var t=parseInt(info[0],10), x=parseInt(info[1],10), y=parseInt(info[2],10)

        return (t>=x+y) && (t%2 === (x+y)%2);
    });

    console.log((okTravel) ? "Yes": "No");
 }
 
 main(require('fs').readFileSync('/dev/stdin', 'utf8'));