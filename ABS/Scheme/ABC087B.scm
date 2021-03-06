(define (coins A B C X)
  (let ((cnt 0))
    (dotimes (i (+ A 1))
      (dotimes (j (+ B 1))
        (dotimes (k (+ C 1))
          (if (= (+ (* i 500) (* j 100) (* k 50)) X)
            (set! cnt (+ cnt 1))
          ))))
  cnt))

(let* ((A (read))
       (B (read))
       (C (read))
       (X (read)))
  (display (coins A B C X)))
