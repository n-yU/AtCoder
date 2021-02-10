(define (pm str)
  (let ((c 0))
    (dotimes (i (string-length str))
        (if (char=? (string-ref str i) #\1)
            (set! c (+ c 1))))
  c))

(display (pm (read-line)))
