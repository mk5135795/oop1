#include <stdio.h>
#include <string.h>

class Nors
{
public:
    virtual char *get_name() = 0;
    virtual int   get_genertaion() = 0;
    virtual char *get_type() = 0;
    virtual char *get_origin() = 0;
};

//#################### - GEN 0 - ####################

class Gen_0 : public Nors
{
public:
    Gen_0();
    virtual char *get_name();
	virtual int   get_genertaion();
    virtual char *get_type();
    virtual char *get_origin();
    virtual ~Gen_0();
protected:
    int    n;
    int    generation;
    char  *name;
    char  *race;
    Gen_0 *origin;
};

class Ginnungagap : public Gen_0
{
public:
    Ginnungagap();
};

//#################### - GEN 1 - ####################

class Gen_1 : public Gen_0
{
public:
    Gen_1();
};

class Audumla : public Gen_1
{
public:
    Audumla();
};

class Ymir : public Gen_1
{
public:
    Ymir();
};

class Mistarblindi : public Gen_1
{
public:
    Mistarblindi();
};

class Geirrod : public Gen_1
{
public:
    Geirrod();
};

//#################### - GEN 2 - ####################

class Gen_2 : public Gen_1
{
public:
    Gen_2();
};

class Buri : public Gen_2
{
public:
    Buri();
};

class Aegir : public Gen_2
{
public:
    Aegir();
};

class Ran : public Gen_2
{
public:
    Ran();
};

class Karl : public Gen_2
{
public:
    Karl();
};

class Logi : public Gen_2
{
public:
    Logi();
};

//#################### - GEN 3 - ####################

class Gen_3 : public Gen_2
{
public:
    Gen_3();
};

class Bolthorn : public Gen_3
{
public:
    Bolthorn();
};

class Thrudgelmir : public Gen_3
{
public:
    Thrudgelmir();
};

class Gilling : public Gen_3
{
public:
    Gilling();
};

class Alvaldi : public Gen_3
{
public:
    Alvaldi();
};

class Aurboda : public Gen_3
{
public:
    Aurboda();
};

class Gymir : public Gen_3
{
public:
    Gymir();
};

class Farbauti : public Gen_3
{
public:
    Farbauti();
};

class Laufey : public Gen_3
{
public:
    Laufey();
};

class Njord : public Gen_3
{
public:
    Njord();
};

class Nerthus : public Gen_3
{
public:
    Nerthus();
};

class Narvi : public Gen_3
{
public:
    Narvi();
};

class Billow_Maidens : public Gen_3
{
public:
    Billow_Maidens();
};

class Heimdall : public Gen_3
{
public:
    Heimdall();
};

//#################### - GEN 4 - ####################

class Gen_4 : public Gen_3
{
public:
    Gen_4();
};

class Borr : public Gen_4
{
public:
    Borr();
};

class Bestla : public Gen_4
{
public:
    Bestla();
};

class Bergelmir : public Gen_4
{
public:
    Bergelmir();
};

class Baugi : public Gen_4
{
public:
    Baugi();
};

class Suttung : public Gen_4
{
public:
    Suttung();
};

class Gangr : public Gen_4
{
public:
    Gangr();
};

class Idi : public Gen_4
{
public:
    Idi();
};

class Thiazi : public Gen_4
{
public:
    Thiazi();
};

class Gerda : public Gen_4
{
public:
    Gerda();
};

class Byleistr : public Gen_4
{
public:
    Byleistr();
};

class Helblindi : public Gen_4
{
public:
    Helblindi();
};

class Loki : public Gen_4
{
public:
    Loki();
};

class Fjorgynn : public Gen_4
{
public:
    Fjorgynn();
};

class Freyr : public Gen_4
{
public:
    Freyr();
};

class Freyja : public Gen_4
{
public:
    Freyja();
};

class Odr : public Gen_4
{
public:
    Odr();
};

class Sigyn : public Gen_4
{
public:
    Sigyn();
};

class Angrboda : public Gen_4
{
public:
    Angrboda();
};

class Nott : public Gen_4
{
public:
    Nott();
};

class Naglfor : public Gen_4
{
public:
    Naglfor();
};

class Delling : public Gen_4
{
public:
    Delling();
};

class Annar : public Gen_4
{
public:
    Annar();
};

class Thralls : public Gen_4
{
public:
    Thralls();
};

class Peasants : public Gen_4
{
public:
    Peasants();
};

class Warriors : public Gen_4
{
public:
    Warriors();
};

//#################### - GEN 5 - ####################

class Gen_5 : public Gen_4
{
public:
    Gen_5();
};

class Ve : public Gen_5
{
public:
    Ve();
};

class Villi : public Gen_5
{
public:
    Villi();
};

class Odin : public Gen_5
{
public:
    Odin();
};

class Frigg : public Gen_5
{
public:
    Frigg();
};

class Gunnlod : public Gen_5
{
public:
    Gunnlod();
};

class Skadi : public Gen_5
{
public:
    Skadi();
};

class Fjornir : public Gen_5
{
public:
    Fjornir();
};

class Gersemi : public Gen_5
{
public:
    Gersemi();
};

class Hnoss : public Gen_5
{
public:
    Hnoss();
};

class Vali : public Gen_5
{
public:
    Vali();
};

class Narfi : public Gen_5
{
public:
    Narfi();
};

class Jormungand : public Gen_5
{
public:
    Jormungand();
};

class Fenrir : public Gen_5
{
public:
    Fenrir();
};

class Hel : public Gen_5
{
public:
    Hel();
};

class Aud : public Gen_5
{
public:
    Aud();
};

class Dag : public Gen_5
{
public:
    Dag();
};

class Jord : public Gen_5
{
public:
    Jord();
};

class Grid : public Gen_5
{
public:
    Grid();
};

class Nep : public Gen_5
{
public:
    Nep();
};

class Rindr : public Gen_5
{
public:
    Rindr();
};

//#################### - GEN 6 - ####################

class Gen_6 : public Gen_5
{
public:
    Gen_6();
};

class Tyr : public Gen_6
{
public:
    Tyr();
};

class Vidar : public Gen_6
{
public:
    Vidar();
};

class Bragi : public Gen_6
{
public:
    Bragi();
};

class Hod : public Gen_6
{
public:
    Hod();
};

class Hermond : public Gen_6
{
public:
    Hermond();
};

class Balder : public Gen_6
{
public:
    Balder();
};

class Nanna : public Gen_6
{
public:
    Nanna();
};

class Skoll : public Gen_6
{
public:
    Skoll();
};

class Hati_Hrodvitnisson : public Gen_6
{
public:
    Hati_Hrodvitnisson();
};

class Thor : public Gen_6
{
public:
    Thor();
};

class Meili : public Gen_6
{
public:
    Meili();
};

class Vali_2 : public Gen_6
{
public:
    Vali_2();
};

class Sif : public Gen_6
{
public:
    Sif();
};

class Jarnsaxa : public Gen_6
{
public:
    Jarnsaxa();
};

//#################### - GEN 7 - ####################

class Gen_7 : public Gen_6
{
public:
    Gen_7();
};

class Foresti : public Gen_7
{
public:
    Foresti();
};

class Ull : public Gen_7
{
public:
    Ull();
};

class Throd : public Gen_7
{
public:
    Throd();
};

class Modi : public Gen_7
{
public:
    Modi();
};

class Magni : public Gen_7
{
public:
    Magni();
};

int main(int argc, char *argv[])
{
    Gerda B;
    printf("%s g%i %s\n%s\n", B.get_name(), B.get_genertaion(), B.get_type(), B.get_origin());
    return 0;
}


Gen_0::Gen_0(){
    generation = 0;
    race = "NN";
    n = 0;
    origin = NULL;
};

char *Gen_0::get_name(){
    return name;
};

int   Gen_0::get_genertaion(){
    return generation;
};

char *Gen_0::get_type(){
    return race;
};

char *Gen_0::get_origin(){
    char *str, *tmp = new char[2];
    tmp [1] = '\n';
    if(n == 1)
    {
        str = new char[13 + strlen(origin->get_name())
                          + strlen(origin->get_type())];
        strcpy(str, "Origin: ");
        strcat(str, origin->get_name());
        strcat(str, " ");
        strcat(str, origin->get_type());
        strcat(str, " g");
        tmp[0] = (origin->get_genertaion() + 48);
        strcat(str, tmp);
    }
    else if(n == 2)
    {
        str = new char[26 + strlen(origin[0].get_name())
                          + strlen(origin[0].get_type())
                          + strlen(origin[1].get_name())
                          + strlen(origin[1].get_type())];
        strcpy(str, "Father: ");
        strcat(str, origin[0].get_name());
        strcat(str, " ");
        strcat(str, origin[0].get_type());
        strcat(str, " g");
        tmp[0] = (origin[0].get_genertaion() + 48);
        tmp[1] = '\n';
        strcat(str, tmp);
        strcat(str, "Mother: ");
        strcat(str, origin[1].get_name());
        strcat(str, " ");
        strcat(str, origin[1].get_type());
        strcat(str, " g");
        tmp[0] = (origin[1].get_genertaion() + 48);
        tmp[1] = '\0';
        strcat(str, tmp);
    }
    else
    {
        str = "origin: none";
    }
    return str;
};

Gen_0::~Gen_0(){
    //delete[] origin;
    delete[] race;
    delete[] name;
};

Gen_1::Gen_1(){
    generation = 1;
};

Gen_2::Gen_2(){
    generation = 2;
};

Gen_3::Gen_3(){
    generation = 3;
};

Gen_4::Gen_4(){
    generation = 4;
};

Gen_5::Gen_5(){
    generation = 5;
};

Gen_6::Gen_6(){
    generation = 6;
};

Gen_7::Gen_7(){
    generation = 7;
};

Ginnungagap::Ginnungagap(){
    name = "Ginnungagap";
    race = "None";
};

Audumla::Audumla(){
    name = "Audumla";
    n = 1;
    origin = new Ginnungagap;
};

Ymir::Ymir(){
    name = "Ymir";
    race = "Giants";
    n = 1;
    origin = new Ginnungagap;
};

Mistarblindi::Mistarblindi(){
    name = "Mistarblindi";
    n = 1;
    origin = new Ginnungagap;
};

Geirrod::Geirrod(){
    name = "Geirrod";
    race = "Giants";
    n = 1;
    origin = new Ginnungagap;
};

Buri::Buri(){
    name = "Buri";
    n = 1;
    origin = new Audumla;
};

Aegir::Aegir(){
    name = "Aegir";
    race = "Giants";
    n = 1;
    origin = new Mistarblindi;
};

Ran::Ran(){
    name = "Ran";
    race = "Giants";
    n = 1;
    origin = new Mistarblindi;
};

Karl::Karl(){
    name = "Karl";
    race = "Giants";
    n = 1;
    origin = new Mistarblindi;
};

Logi::Logi(){
    name = "Logi";
    race = "Giants";
    n = 1;
    origin = new Mistarblindi;
};

Bolthorn::Bolthorn(){
    name = "Bolthorn";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Thrudgelmir::Thrudgelmir(){
    name = "Thrudgelmir";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Gilling::Gilling(){
    name = "Gilling";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Alvaldi::Alvaldi(){
    name = "Alvaldi";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Aurboda::Aurboda(){
    name = "Aurboda";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Gymir::Gymir(){
    name = "Gymir";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Farbauti::Farbauti(){
    name = "Farbauti";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Laufey::Laufey(){
    name = "Laufey";
    race = "Giants";
    n = 1;
    origin = new Ymir;
};

Njord::Njord(){
    name = "Njord";
    race = "Vanir";
};

Nerthus::Nerthus(){
    name = "Nerthus";
    race = "Aesir";
};

Narvi::Narvi(){
    name = "Narvi";
    race = "Giants";
};

Billow_Maidens::Billow_Maidens(){
    name = "Billow_Maidens";
    n = 2;
    origin = new Gen_0[2];
    Aegir O1;
    Ran O2;
    origin[0] = O1;
    origin[1] = O2;
};

Heimdall::Heimdall(){
    name = "Heimdall";
    race = "Giants";
    n = 1;
    origin = new Geirrod;
};

Borr::Borr(){
    name = "Borr";
    n = 1;
    origin = new Audumla;
};

Bestla::Bestla(){
    name = "Bestla";
    race = "Giants";
    n = 1;
    origin = new Bolthorn;
};

Bergelmir::Bergelmir(){
    name = "Bergelmir";
    race = "Giants";
    n = 1;
    origin = new Thrudgelmir;
};

Baugi::Baugi(){
    name = "Baugi";
    race = "Giants";
    n = 1;
    origin = new Gilling;
};

Suttung::Suttung(){
    name = "Suttung";
    race = "Giants";
    n = 1;
    origin = new Gilling;
};

Gangr::Gangr(){
    name = "Gangr";
    race = "Giants";
    n = 1;
    origin = new Alvaldi;
};

Idi::Idi(){
    name = "Idi";
    race = "Giants";
    n = 1;
    origin = new Alvaldi;
};

Thiazi::Thiazi(){
    name = "Thiazi";
    race = "Giants";
    n = 1;
    origin = new Alvaldi;
};

Gerda::Gerda(){
    name = "Gerda";
    race = "Giants";
    n = 2;
    origin = new Gen_0[2];
    Gymir O1;
    Aurboda O2;
    origin[0] = O1;
    origin[1] = O2;
};

Byleistr::Byleistr(){
    name = "Byleistr";
    race = "Giants";
    n = 2;
    origin = new Gen_0[2];
    Farbauti O1;
    Laufey O2;
    origin[0] = O1;
    origin[1] = O2;
};

Helblindi::Helblindi(){
    name = "Helblindi";
    race = "Giants";
    n = 2;
    origin = new Gen_0[2];
    Farbauti O1;
    Laufey O2;
    origin[0] = O1;
    origin[1] = O2;
};

Loki::Loki(){
    name = "Loki";
    race = "Giants";
    n = 2;
    origin = new Gen_0[2];
    Farbauti O1;
    Laufey O2;
    origin[0] = O1;
    origin[1] = O2;
};

Fjorgynn::Fjorgynn(){
    name = "Fjorgynn";
    race = "Aesir";
};

Freyr::Freyr(){
    name = "Freyr";
    race = "Vanir";
    n = 2;
    origin = new Gen_0[2];
    Njord O1;
    Nerthus O2;
    origin[0] = O1;
    origin[1] = O2;
};

Freyja::Freyja(){
    name = "Freyja";
    race = "Vanir";
    n = 2;
    origin = new Gen_0[2];
    Njord O1;
    Nerthus O2;
    origin[0] = O1;
    origin[1] = O2;
};

Odr::Odr(){
    name = "Odr";
    race = "Aesir";
};

Sigyn::Sigyn(){
    name = "Sigyn";
};

Angrboda::Angrboda(){
    name = "Angrboda";
    race = "Giants";
};

Nott::Nott(){
    name = "Nott";
    race = "Vanir";
    n = 1;
    origin = new Narvi;
};

Naglfor::Naglfor(){
    name = "Naglfor";
    race = "Elves";
};

Delling::Delling(){
    name = "Delling";
    race = "Elves";
};

Annar::Annar(){
    name = "Annar";
    race = "Dwarfs";
};

Thralls::Thralls(){
    name = "Thralls";
    n = 1;
    origin = new Heimdall;
};

Peasants::Peasants(){
    name = "Peasants";
    n = 1;
    origin = new Heimdall;
};

Warriors::Warriors(){
    name = "Warriors";
    n = 1;
    origin = new Heimdall;
};

Ve::Ve(){
    name = "Ve";
    n = 2;
    origin = new Gen_0[2];
    Borr O1;
    Bestla O2;
    origin[0] = O1;
    origin[1] = O2;
};

Villi::Villi(){
    name = "Villi";
    n = 2;
    origin = new Gen_0[2];
    Borr O1;
    Bestla O2;
    origin[0] = O1;
    origin[1] = O2;
};

Odin::Odin(){
    name = "Odin";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Borr O1;
    Bestla O2;
    origin[0] = O1;
    origin[1] = O2;
};

Frigg::Frigg(){
    name = "Frigg";
    race = "Aesir";
    n = 1;
    origin = new Fjorgynn;
};

Gunnlod::Gunnlod(){
    name = "Gunnlod";
    race = "Giants";
    n = 1;
    origin = new Suttung;
};

Skadi::Skadi(){
    name = "Skadi";
    race = "Giants";
    n = 1;
    origin = new Thiazi;
};

Fjornir::Fjornir(){
    name = "Fjornir";
    n = 2;
    origin = new Gen_0[2];
    Freyr O1;
    Gerda O2;
    origin[0] = O1;
    origin[1] = O2;
};

Gersemi::Gersemi(){
    name = "Gersemi";
    n = 2;
    origin = new Gen_0[2];
    Odr O1;
    Freyja O2;
    origin[0] = O1;
    origin[1] = O2;
};

Hnoss::Hnoss(){
    name = "Hnoss";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odr O1;
    Freyja O2;
    origin[0] = O1;
    origin[1] = O2;
};

Vali::Vali(){
    name = "Vali";
    race = "Giants";
    n = 2;
    origin = new Gen_0[2];
    Loki O1;
    Sigyn O2;
    origin[0] = O1;
    origin[1] = O2;
};

Narfi::Narfi(){
    name = "Narfi";
    race = "Giants";
    n = 2;
    origin = new Gen_0[2];
    Loki O1;
    Sigyn O2;
    origin[0] = O1;
    origin[1] = O2;
};

Jormungand::Jormungand(){
    name = "Jormungand";
    n = 2;
    origin = new Gen_0[2];
    Loki O1;
    Angrboda O2;
    origin[0] = O1;
    origin[1] = O2;
};

Fenrir::Fenrir(){
    name = "Fenrir";
    n = 2;
    origin = new Gen_0[2];
    Loki O1;
    Angrboda O2;
    origin[0] = O1;
    origin[1] = O2;
};

Hel::Hel(){
    name = "Hel";
    n = 2;
    origin = new Gen_0[2];
    Loki O1;
    Angrboda O2;
    origin[0] = O1;
    origin[1] = O2;
};

Aud::Aud(){
    name = "Aud";
    n = 2;
    origin = new Gen_0[2];
    Naglfor O1;
    Nott O2;
    origin[0] = O1;
    origin[1] = O2;
};

Dag::Dag(){
    name = "Dag";
    race = "Elves";
    n = 2;
    origin = new Gen_0[2];
    Delling O1;
    Nott O2;
    origin[0] = O1;
    origin[1] = O2;
};

Jord::Jord(){
    name = "Jord";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Annar O1;
    Nott O2;
    origin[0] = O1;
    origin[1] = O2;
};

Grid::Grid(){
    name = "Grid";
    race = "Giants";
};

Nep::Nep(){
    name = "Nep";
    race = "Elves";
};

Rindr::Rindr(){
    name = "Rindr";
    race = "Giants";
};

Tyr::Tyr(){
    name = "Tyr";
    n = 1;
    origin = new Odin;
};

Vidar::Vidar(){
    name = "Vidar";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Grid O2;
    origin[0] = O1;
    origin[1] = O2;
};

Bragi::Bragi(){
    name = "Bragi";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Frigg O2;
    origin[0] = O1;
    origin[1] = O2;
};

Hod::Hod(){
    name = "Hod";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Frigg O2;
    origin[0] = O1;
    origin[1] = O2;
};

Hermond::Hermond(){
    name = "Hermond";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Frigg O2;
    origin[0] = O1;
    origin[1] = O2;
};

Balder::Balder(){
    name = "Balder";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Frigg O2;
    origin[0] = O1;
    origin[1] = O2;
};

Nanna::Nanna(){
    name = "Nanna";
    race = "Aesir";
    n = 1;
    origin = new Nep;
};

Skoll::Skoll(){
    name = "Skoll";
    race = "Warg";
    n = 1;
    origin = new Fenrir;
};

Hati_Hrodvitnisson::Hati_Hrodvitnisson(){
    name = "Hati_Hrodvitnisson";
    race = "Warg";
    n = 1;
    origin = new Fenrir;
};

Thor::Thor(){
    name = "Thor";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Jord O2;
    origin[0] = O1;
    origin[1] = O2;
};

Meili::Meili(){
    name = "Meili";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Jord O2;
    origin[0] = O1;
    origin[1] = O2;
};

Vali_2::Vali_2(){
    name = "Vali";
    race = "Elves";
    n = 2;
    origin = new Gen_0[2];
    Odin O1;
    Rindr O2;
    origin[0] = O1;
    origin[1] = O2;
};

Sif::Sif(){
    name = "Sif";
    race = "Elves";
};

Jarnsaxa::Jarnsaxa(){
    name = "Jarnsaxa";
    race = "Giants";
};

Foresti::Foresti(){
    name = "Foresti";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Balder O1;
    Nanna O2;
    origin[0] = O1;
    origin[1] = O2;
};

Ull::Ull(){
    name = "Foresti";
    race = "Ull";
    n = 1;
    origin = new Sif;
};

Throd::Throd(){
    name = "Throd";
    n = 2;
    origin = new Gen_0[2];
    Thor O1;
    Sif O2;
    origin[0] = O1;
    origin[1] = O2;
};

Modi::Modi(){
    name = "Modi";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Thor O1;
    Jarnsaxa O2;
    origin[0] = O1;
    origin[1] = O2;
};

Magni::Magni(){
    name = "Magni";
    race = "Aesir";
    n = 2;
    origin = new Gen_0[2];
    Thor O1;
    Jarnsaxa O2;
    origin[0] = O1;
    origin[1] = O2;
};
