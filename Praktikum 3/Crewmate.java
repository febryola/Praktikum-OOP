class Crewmate{
    public String name;
    public Boolean isDead;
    private int stabCount;
    static int id=1;

    public Crewmate(){
        this.name = "Crewmate "+id;
        this.isDead = false;
        this.stabCount = 0;
        id++;
    } 

    public Crewmate(String name){
        this.name = name;
        this.isDead = false;
        this.stabCount = 0;
        id++;
    }

    public void stab(Crewmate victim){
        if(this.isDead){
            System.out.println(this.name+" is dead");
        }
        else{
            System.out.println(this.name+" stabs "+victim.name);
            victim.isDead = true;
            this.stabCount++;
        }
    }

    @Override
    public String toString(){
        if(this.isDead==true){
            return this.name+" is dead";
        }
        else if(!this.isDead){
            if(this.stabCount>0){
                return this.name+" is sus";
            }
            else{
                return this.name+" is cool";
            }
        }
        else{
            return "Error";
        }
    }
}

