// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function (fn, t) {
    let timer
    return function (...args) {
        timer && clearTimeout(timer)
        timer = setTimeout(() => fn(...args), t)
    }
}

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */