(define (create-data)
  (let ((N (read))
        (t (make-vector 100001 0))
        (x (make-vector 100001 0))
        (y (make-vector 100001 0)))
      (dotimes (i N)
        (set! (vector-ref t (+ i 1)) (read))
        (set! (vector-ref x (+ i 1)) (read))
        (set! (vector-ref y (+ i 1)) (read)))
  (values N t x y)))

(define (traveling N t x y)
  (let ((ok 1))
     (dotimes (i N)
        (if (< (- (vector-ref t (+ i 1)) (vector-ref t i)) (+ (abs (- (vector-ref x (+ i 1)) (vector-ref x i))) (abs (- (vector-ref y (+ i 1)) (vector-ref y i)))))
          (set! ok 0))
        (if (not (= (remainder (- (vector-ref t (+ i 1)) (vector-ref t i)) 2) (remainder (+ (abs (- (vector-ref x (+ i 1)) (vector-ref x i))) (abs (- (vector-ref y (+ i 1)) (vector-ref y i)))) 2)))
          (set! ok 0)))
  (if (= ok 1) "Yes" "No")))

(display (call-with-values create-data traveling))