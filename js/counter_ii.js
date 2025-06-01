/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    m = init
    hold = init
    return {
        increment: function(n) {
            return m+=1
        },
        decrement: function(n) {
            m -= 1
            return m
        },
        reset: function(n) {
            m = hold
            return m
        }
    }    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
