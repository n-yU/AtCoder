(define (div2 A)
  (dotimes (i (vector-length A))
    (set! (vector-ref A i) (/ (vector-ref A i) 2)))
  A)

(define (allEven A)
  (let ((ok 0))
    (dotimes (i (vector-length A))
      (if (odd? (vector-ref A i))
        (set! ok 1)))
    ok))

(define (shift-only A c)
  (if (= (allEven A) 1)
    c
    (shift-only (div2 A) (+ c 1))))

(define (create-vct N)
  (let ((A (make-vector N)))
    (dotimes (i N)
      (set! (vector-ref A i) (read)))
  A))

(display (shift-only (create-vct (read)) 0))
