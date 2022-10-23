import cv2
# this is a python program
cap = cv2.VideoCapture('C:\Users\sivam\Downloads\a.mp4')

while(True):
    ret, frame = cap.read()
    cv2.imshow('frame',frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        cv2.destroyAllWindows()
        break
