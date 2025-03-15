class Author {
    // atribut-atribut private
    private String name;
    private String nationality;

    // constructor dengan parameter
    Author(String name, String nationality) {
        this.name = name;
        this.nationality = nationality;
    }

    // getter dan setter untuk name
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    // getter dan setter untuk nationality
    public void setNationality(String nationality) {
        this.nationality = nationality;
    }

    public String getNationality() {
        return nationality;
    }
}
