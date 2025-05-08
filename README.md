# real-time-road-condition-monitoring
A real-time road condition monitoring system using YOLOv5 to detect potholes, cracks, and debris from live video feeds. It aids road safety and maintenance by providing timely alerts and visual feedback. Built with OpenCV and PyTorch, it enables smart infrastructure management through deep learning.
# Real-time Road Conditioning Model

A deep learning-based project to detect and classify road anomalies (like potholes, debris, etc.) in real time using video input. The system uses the YOLOv5/YOLOv8 model and is designed to support proactive road maintenance and enhance transportation safety.

## Overview

This project aims to:
- Monitor real-time road conditions using live video feeds.
- Detect road damage like potholes and debris using YOLOv5/YOLOv8.
- Alert maintenance teams to prioritize repairs based on detected issues.

## Technologies Used
- **Python**
- **PyTorch** & **YOLOv5/YOLOv8**
- **OpenCV**
- **LabelImg** (for annotation)
- **NumPy, Pandas, Matplotlib** (for data handling and visualization)

## Features
- Real-time detection from camera/video feed.
- High accuracy object detection using custom-trained YOLO model.
- Visual output with annotated frames and confidence scores.
- Alert generation based on detection results.

##  Project Structure
project/
├── project.ipynb # Jupyter Notebook with full pipeline
├── project report.docx # Project report documentation
├── data/ # (optional) Labeled images & YOLO format
├── models/ # Trained YOLO weights (if any)
└── README.md # Project description


##  How It Works
1. **Data Collection**: Road images/videos are gathered and annotated using LabelImg.
2. **Model Training**: YOLOv5 is trained using the custom dataset.
3. **Inference**: The model detects anomalies on live video frames using OpenCV.
4. **Alert System**: Detected objects trigger alerts and are visualized on a dashboard.

##  Methodology
- Dataset split into training, validation, and test sets.
- YOLO configuration with custom classes (e.g., pothole, crack, debris).
- Precision, recall, F1-score, and mAP evaluated.
- Model deployed in real-time using OpenCV for video stream processing.

## Results
- Detection accuracy: ~90%+ in favorable conditions.
- Fast processing speed (real-time capability).
- Some performance drop in heavy rain/fog – future work includes robustness improvements.

## Future Improvements
- Add GPS tagging for detected anomalies.
- Improve detection under bad weather and night conditions.
- Deploy via mobile or web dashboard.





