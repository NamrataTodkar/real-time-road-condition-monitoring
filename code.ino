import cv2
import torch

# Load the custom YOLO model (change path as needed)
model = torch.hub.load('ultralytics/yolov5', 'custom', path='best.pt')

# Start video capture (0 for webcam, or provide video file path)
cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Run detection
    results = model(frame)

    # Convert results to OpenCV-friendly format
    annotated_frame = results.render()[0]

    # Display the annotated frame
    cv2.imshow("Road Condition Detection", annotated_frame)

    # Exit on 'q' key
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
