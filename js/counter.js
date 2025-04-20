// My first stab here
/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var num = 0
    if (n != null) {
        num = n
    }
    return function() {
        return num++;
    };
};

// A faster implementation using typeof
/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var c;
    return function() {
        if (typeof(c) === 'undefined') return c=n;
        return c+=1;
    };
};
