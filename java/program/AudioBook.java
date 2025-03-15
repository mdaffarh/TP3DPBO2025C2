import java.util.ArrayList;

public class AudioBook extends Book implements VoiceRecording{
    private String speaker;
    private int duration;
    private int fileSize;
    private String format;

    // constructor dengan parameter
    AudioBook(String title, ArrayList<Author> authorList, Publisher publisher, String ISBN, String speaker, int duration, int fileSize, String format) {
        super(title, authorList, publisher, ISBN);
        this.speaker = speaker;
        this.duration = duration;
        this.fileSize = fileSize;
        this.format = format;
    }

    // getter dan setter untuk fileSize
    public void setFileSize(int fileSize) {
        this.fileSize = fileSize;
    }

    public int getFileSize() {
        return fileSize;
    }

    // getter dan setter untuk format
    public void setFormat(String format) {
        this.format = format;
    }

    public String getFormat() {
        return format;
    }

    // Implementing VoiceRecording methods
    @Override
    public void setSpeaker(String speaker) {
        this.speaker = speaker;
    }

    @Override
    public String getSpeaker() {
        return speaker;
    }

    @Override
    public void setDuration(int duration) {
        this.duration = duration;
    }

    @Override
    public int getDuration() {
        return duration;
    }
}
