function main(input) {
    const words = ['dream', 'dreamer', 'erase', 'eraser'];
    const S = input.split('\n')[0];
    var i=S.length,w;

    while(true) {
        w = words.find((w) => S.endsWith(w, i));
        if(!w)
            break;
        i -= w.length;
    }
    
    console.log((i===0) ? 'YES' : 'NO');
 }
 
 main(require('fs').readFileSync('/dev/stdin', 'utf8'));