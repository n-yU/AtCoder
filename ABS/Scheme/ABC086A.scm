(define (pd a b)
  (if (zero? (remainder (* a b) 2))
    "Even"
    "Odd"))

(let* ((a (read))
      ((b (read)))
      (display (pd a b))))
