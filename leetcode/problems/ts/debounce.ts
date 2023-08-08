// by @codeAbinash

type F = (...p: any[]) => any

function debounce(fn: F, t: number): F {
    let timer
    return function (...args) {
        clearTimeout(timer)
        timer = setTimeout(() => fn(...args), t)
    }
}