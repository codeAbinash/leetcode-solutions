var decodeString = function(s) {
    let stack = []

    for(i in s){
        if(s[i] != ']')
            stack.push(s[i])
        else{
            let str = ''
            while(stack[stack.length - 1] != '[')
                str = stack.pop() + str
            stack.pop()

            let num = ''
            while(stack.length &&  !isNaN(stack[stack.length - 1]))
                num = stack.pop() + num
            num = Number(num)
            
            for(let i = 0; i < num; i++)
                stack.push(...str)
        }
    }
    return stack.join('')
};