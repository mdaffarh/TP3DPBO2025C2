class VoiceRecording:
    # konstruktor dengan parameter
    def __init__(self, speaker, duration):
        self.speaker = speaker
        self.duration = duration
    
    # getter dan setter untuk speaker
    def setSpeaker(self, speaker):
        self.speaker = speaker
    
    def getSpeaker(self):
        return self.speaker
    
    # getter dan setter untuk duration
    def setDuration(self, duration):
        self.duration = duration
    
    def getDuration(self):
        return self.duration