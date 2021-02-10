(define (otoshidama N Y)
  (let ((c1 -1) (c2 -1) (c3 -1))
    (dotimes (i (+ N 1))
      (dotimes (j (- (+ N 1) i))
        (if (= Y (+ (* 10000 i) (* 5000 j) (* 1000 (- N i j))))
          (begin
            (set! c1 i)
            (set! c2 j)
            (set! c3 (- N i j))))))
  (format "~a ~a ~a\n" c1 c2 c3)))

(let* ((N (read)) (Y (read)))
  (display (otoshidama N Y)))
