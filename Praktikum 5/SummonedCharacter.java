import java.util.List;
import java.util.ArrayList;

public class SummonedCharacter implements ISummoned{
  private Character character;
  private int level;
  private int exp;
  private List<Spell> activeSpells;

  public SummonedCharacter(Character character, int level, int exp) {
    this.character = character;
    this.level = level;
    this.exp = exp;
    this.activeSpells = new ArrayList<Spell>();
  }

  // getter
  public int getLevel(){
    return this.level;
  }

  public int getExp(){
    return this.exp;
  }

  // menambahkan spell ke dalam daftar spell aktif
  public void addSpell(Spell s){
    this.activeSpells.add(s);
  }

  // mengembalikan daftar spell aktif
  public List<Spell> getActiveSpells(){
    return this.activeSpells;
  }

  // meningkatkan level karakter sebanyak 1
  // mereset xp ke 0
  // meningkatkan baseAtk dan baseHp sebanyak attackUp dan healthUp
  public void levelUp(){
    this.level += 1;
    this.exp = 0;
    int newBaseAtk = this.character.getAttackValue() + this.character.getAttackUpValue();
    int newBaseHp = this.character.getHpValue() + this.character.getHealthUpValue();
    Character newchar = new Character(
      this.character.getName(), 
      newBaseAtk, 
      newBaseHp, 
      this.character.getAttackUpValue(), 
      this.character.getHealthUpValue()
      );
    this.character = newchar;
  }

  // menggambar kartu ke layar
  public void render(){
    System.out.println("Nama: " + this.character.getName());
    System.out.println("Level: " + this.getLevel());
    System.out.println("Exp: " + this.getExp());
    System.out.println("Atk: " + this.character.getAttackValue());
    System.out.println("Hp: " + this.character.getHpValue());
    System.out.println("Memiliki " + this.activeSpells.size() + " spell aktif:");
    List<Spell> spells = this.getActiveSpells();
    for (Spell spell : spells) {
      System.out.println("- " + spell.getName());
    }
    System.out.println();
  }
}