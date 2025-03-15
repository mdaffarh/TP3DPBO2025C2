class Publisher {
    // atribut-atribut private
    private String name;
    private String address;

    // constructor dengan parameter
    Publisher(String name, String address) {
        this.name = name;
        this.address = address;
    }

    // getter dan setter untuk name
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    // getter dan setter untuk address
    public void setAddress(String address) {
        this.address = address;
    }

    public String getAddress() {
        return address;
    }
}
