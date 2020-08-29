
class Cfgsoundshaders
{

    class nia_C96_Closure_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\c96_first", 1 },
            { "nia_wp_c96\snd\c96_first", 1 } };
        range = 10;
        volume = 0.8;
        rangeCurve[] = {
            { 0, 1 },
            { 10, 0 } };
    };
    class nia_C96_closeShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\C96_close", 1 } };
        volume = 1.1;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_C96_midShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\C96_mid", 1 } };
        volume = 1.1;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_C96_distShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\C96_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class nia_C96_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant", 1 } };
        volume = 1;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class nia_C96_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest", 1 } };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_C96_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses", 1 } };
        volume = "1*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_C96_tailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\p226_indoor", 1 } };
        volume = "1*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class nia_C96_tailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\p226_meadows", 1 } };
        volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_C96_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees", 1 } };
        volume = "1*((1-interior/1.4)*trees/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_C96_silencerShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\p226_sil", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class nia_C96_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_C96_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_C96_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\\p226_siltailindoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_C96_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_C96_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
   
    class nia_DL44_closeShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\DL44_close", 1 } };
        volume = 1.1;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_DL44_midShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\DL44_mid", 1 } };
        volume = 1.6;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_DL44_distShot_SoundShader
    {
        samples[] = {
            { "nia_wp_c96\snd\DL44_dist", 1 } };
        volume = 1.0;
        range = 1000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1000, 1 } };
    };
};

