#include<iostream>
#include<iomanip>
#include<vector>
#include<time.h>
#include<stdio.h>
using namespace std;


int main()
{
    vector<int> vec = {651196418, 410650626, 644048903, 320135177, 204253194, 906008592, 889155601, 951654417, 274100242, 751906836, 702076948, 261308438, 638957591, 460288026, 711360538, 307970075, 421877789, 709935136, 735080486, 467759142, 268830763, 427665452, 597739564, 207267888, 874692657, 210145329, 972611638, 845770813, 298952767, 514750527, 832110657, 411099205, 321257542, 598861896, 856129609, 902768718, 522133588, 342427734, 517165144, 261652570, 204894299, 781039707, 381689951, 882282594, 304758882, 984047716, 315996258, 347684966, 876992616, 487821421, 803979375, 313174129, 304050295, 385886327, 321386622, 323328128, 301019264, 872415363, 441366660, 454242437, 221888644, 671533191, 619788425, 470261901, 915359886, 596140175, 797661328, 351768719, 787914898, 577730705, 935745684, 365863064, 975296666, 541872284, 602239132, 332325024, 545058981, 616274086, 771027109, 727382185, 292843690, 240914608, 293675185, 391475378, 972380342, 181311671, 782174390, 912033975, 499359931, 273506493, 754942147, 617906371, 128471236, 816685258, 296306893, 637622478, 394918096, 134826192, 652363986, 555909328, 422416598, 755290327, 485144796, 723124444, 853453029, 185315558, 941258984, 938297578, 989006060, 542982381, 311617773, 780413170, 949682428, 194998526, 388997375, 363247871, 979253505, 571404554, 774840587, 542327053, 659769622, 686962967, 388192536, 767064345, 209926427, 271483163, 598751517, 467511587, 292276517, 597039399, 163502375, 205527340, 128370988, 559864114, 989544756, 222294325, 473321781, 975581497, 952897850, 233627962, 276013371, 494887230, 111546687, 340341056, 678631745, 401826110, 111407429, 468635974, 908421447, 157956425, 468701514, 958955851, 581032268, 992821582, 102611278, 181789010, 611397623, 159193432, 709161306, 912623968, 623153510, 109891942, 949371240, 736121196, 733356397, 660453742, 335753583, 585044342, 124944763, 628181374, 872167806, 111155584, 597524865, 627937666, 305226115, 631267714, 184973700, 988264838, 141912456, 604041609, 516049289, 514029963, 379228555, 311855502, 378266006, 547776925, 387342751, 750379427, 744384933, 828684717, 988238254, 829450671, 645824944, 752198065, 313594290, 935598513, 568396206, 578484661, 232548792, 878537145, 551901627, 797944251, 552800701, 440025548, 244216269, 682115532, 211136975, 175849937, 236399057, 866458067, 372183507, 986376661, 991490525, 693471715, 103608805, 890743276, 387086829, 773247470, 693467631, 241332720, 364290541, 776989171, 143024628, 704018935, 942531066, 635402747, 207348219, 556110335, 898159105, 687432193, 547297796, 825508360, 159730187, 201984524, 804731405, 371364365, 199453201, 353974803, 531460629, 268071446, 186192409, 918411802, 270051870, 730292773, 252699174, 988721703, 243900968, 859513385, 670384679, 608102949, 512410157, 470413869, 219894317, 794352174, 457431601, 872614452, 624437813, 406811190, 827023925, 541710904, 754336313, 117570104, 957258293, 538956348, 959085117, 556175934, 587516478, 262976061, 307008065, 586879554, 174215742, 268677702, 449806918, 816945734, 829293129, 162955851, 656548432, 516391504, 332667475, 350370387, 836250199, 607566431, 645474921, 386042475, 943514226, 759724658, 297871988, 846752376, 781445753, 720044666, 780827259, 564275838, 202052229, 833391238, 439282311, 811319946, 797766285, 805423760, 931576465, 603247249, 965587602, 379863699, 117193360, 878099098, 133034651, 821846688, 655141537, 793942689, 914234025, 362734250, 495925929, 313549484, 285770411, 232499887, 488217264, 718451382, 793758393, 980443834, 198847163, 947712699, 245254846, 862460607, 659870399, 104438462, 956799685, 328514246, 386542278, 280406729, 650422986, 430146257, 192449234, 729379540, 989993685, 666872538, 587182811, 159826651, 313881307, 753048287, 195640034, 415892200, 306209516, 777454319, 920144623, 951530227, 569977591, 582335224, 339043066, 440819711, 131896059, 866136829, 646007548, 871629567, 138228481, 371168004, 650498821, 275211012, 861227784, 748489480, 934271753, 545354505, 308456200, 538714902, 420324119, 672731928, 802226969, 174015258, 397175579, 952281884, 984152861, 224434974, 100150045, 260942617, 927314718, 744667939, 171922213, 496634661, 604334887, 194941734, 307344166, 955130666, 395203373, 408607534, 853451569, 325215026, 654433075, 992680755, 279577395, 408462134, 955362103, 419543861, 162276145, 981629760, 704324418, 959288133, 237030217, 904313674, 288217931, 560761673, 251216719, 291316561, 833915730, 618199891, 214893399, 687967065, 284719965, 459105120, 137827171, 185791331, 738200422, 367498087, 310864743, 986389351, 183724910, 738573167, 805309298, 104555378, 815760244, 465965942, 866675578, 166777725, 394599294, 741786494, 804045695, 143362945, 159218562, 754271106, 589413252, 567737214, 287933313, 147800965, 388105097, 577512330, 157531019, 408484748, 617493392, 571487121, 416615313, 373670803, 949826453, 570502041, 681028506, 887063451, 867765148, 805469085, 199889822, 384023459, 855983012, 891947939, 960314278, 428444583, 796289960, 955653031, 329098153, 506506156, 253459376, 803244979, 863939509, 235340730, 297233339, 986645437, 496245698, 766618563, 202740676, 957113286, 496688070, 529365960, 362957766, 142445516, 897913810, 999457747, 968162259, 875926488, 980956122, 479202272, 324019171, 894970856, 686597100, 545504239, 849769458, 813530099, 304434165, 184171515, 452719612, 219898877, 495346684, 635071487, 106060802, 207012870, 145892360, 708899851, 266642443, 568435724, 580723726, 200696850, 637783066, 982002714, 362636317, 444584990, 456119327, 371934239, 557028382, 623172642, 281549859, 431819812, 218706982, 101055527, 655436840, 222514217, 267992106, 960341035, 499987500, 609299500, 267240493, 525167663, 765688883, 541535284, 189533236, 161000502, 254354487, 312745016, 744821814, 149343292, 607712323, 414786629, 612361286, 532458568, 153721929, 387699787, 398478414, 820847695, 513168465, 482409556, 662238294, 349441114, 165598304, 199861345, 602063970, 724548708, 228906086, 393854059, 858913900, 108993649, 535676018, 399082610, 232414322, 457987189, 122846330, 338984059, 415947899, 628487298, 159663234, 191734915, 822869126, 383116424, 694275212, 352701581, 582093974, 686765207, 876835996, 644746404, 512271525, 708037798, 604245167, 965315759, 198929585, 934970545, 830704825, 886162621, 601799872, 949105858, 561032388, 722517196, 603577549, 381058255, 893979856, 136604882, 155960532, 242861269, 683506902, 254530775, 312763606, 832511189, 823930075, 736974046, 751914209, 932818145, 589391074, 115866852, 584821989, 762780902, 640687335, 817476839, 679769322, 163937514, 890039532, 818119917, 762782959, 360000752, 514596079, 760491253, 674612473, 762262779, 656633084, 812711166, 599588095, 697912576, 737594626, 318747911, 471285002, 814925066, 772887818, 503366923, 517539085, 947918099, 974195988, 910415125, 457151766, 996879638, 896806165, 855342355, 326139162, 187194652, 401683741, 514821413, 568648997, 942040359, 872006949, 949390634, 163267885, 850343214, 158999857, 535723314, 102239539, 207273272, 916432184, 934444349, 415857983, 507071810, 469683523, 115014978, 196744518, 845516103, 933600586, 773123403, 424793422, 506219854, 413349200, 713747793, 346914134, 254117207, 432330071, 969528662, 294466907, 929506655, 245409119, 765717857, 935914850, 808908130, 511020391, 561315176, 124261738, 880184682, 966460781, 446942575, 143857009, 904975730, 662283636, 160365940, 963147127, 743732601, 229705081, 824110462, 105393535, 953529728, 786435456, 396551555, 287176067, 425526661, 153015687, 219233673, 359306637, 786593166, 486481293, 867118478, 805434770, 407932308, 364647830, 993056151, 848678295, 456773017, 631846298, 244270491, 242765211, 341362075, 651275675, 509197732, 447495589, 688856491, 834905518, 788864432, 893216179, 519527860, 338683321, 566109627, 652928445, 163593662, 571987390, 564903358, 286891459, 709113285, 766141894, 122965449, 154471882, 847218123, 966796748, 698326476, 383109911, 628067790, 170618320, 669216209, 332486097, 322059723, 135540182, 807265759, 571624928, 656518624, 609304036, 527687140, 147549670, 668638693, 313142760, 715408870, 715400682, 334015978, 478367210, 609158629, 264537581, 546164208, 986035703, 206405112, 210224631, 347276794, 544042492, 961877501, 579753469, 935775742, 188462592, 748881409, 657128961, 318365187, 928548356, 229049857, 731125248, 648865287, 692461059, 123819530, 135429643, 217032202, 334218765, 902118926, 129869324, 557059599, 379242001, 153341460, 268289558, 629065241, 475702810, 867155482, 136427039, 756545056, 535143972, 355907111, 106597929, 951653933, 951506481, 403734067, 597980725, 364723766, 552812087, 836277817, 581809724, 726189629, 165916223, 251921986, 934592068, 212702792, 190961227, 509105748, 420447829, 902016600, 802375258, 168420956, 738690653, 717606495, 532069986, 473302627, 148758117, 207240806, 190862956, 428600942, 123561585, 328971890, 644652660, 145090164, 311096952, 641633915, 309872253, 709009024, 771350150, 742219398, 568882826, 683910796, 102647436, 767196816, 195890835, 745909909, 239384214, 594161304, 522806937, 522694298, 822750876, 897455773, 763352739, 445308580, 289865382, 112692907, 939345583, 901007023, 125613746, 801801912, 415278777, 690577085, 859135679, 942100160, 552662720, 530642630, 616060614, 326225606, 852293323, 444802763, 708810444, 333258446, 459198158, 315344596, 971726550, 791920345, 414144223, 511401696, 432938722, 578295527, 800726761, 763000553, 351792884, 311070453, 721172213, 102870775, 803571448, 227579637, 674053882, 320438010, 400520956, 278066935, 349277947, 734447362, 280315654, 590161671, 751503111, 414201606, 849372934, 492689168, 958631698, 702998301, 477062942, 809193250, 440563491, 965824294, 390049579, 547643179, 629329709, 640526128, 924360500, 988278589, 109694781, 241418048, 468334402, 538165059, 764540738, 684433221, 401895238, 182517575, 820993863, 622557001, 683933513, 330719051, 415637319, 990936904, 404819788, 248860495, 876427079, 758251346, 487362387, 997949271, 697376600, 713989975, 666304344, 461938523, 106864476, 260933469, 871606110, 237729631, 366958431, 737111905, 684003169, 226041697, 641691491, 501426021, 227884904, 289290089, 588396392, 472600427, 594288491, 895706988, 908529515, 431871852, 947218287, 103776113, 634421104, 208461690, 697601916, 230465404, 169179004, 778348412, 355370882, 742971272, 548644748, 704085905, 486741907, 622063513, 665980827, 921685915, 323170209, 381728673, 426882980, 680628133, 412866471, 790556583, 512145321, 133210026, 544569257, 546910124, 778592174, 140554159, 483198896, 883441584, 895922098, 621658040, 989212603, 512591803, 284526526, 376821695, 605468613, 856217542, 380846023, 100509639, 784936901, 451606474, 603275210, 448069578, 160935885, 980553678, 408426451, 470689749, 528592858, 646260699, 835338202, 276420574, 436146143, 586135519, 993961953, 515229662, 371509219, 818005991, 893990890, 229965820, 590940141, 761493486, 843685870, 861843440, 504459250, 310175731, 431769588, 549548021, 480268278, 407853046, 422119413, 155658233, 837967867, 885342204, 562464766, 907300863};

    time_t ab1 = clock();
    for(int temp=0;temp<vec.size();temp++)
    {

        long din = (long)vec[temp];
        long div = 0x0400000000000000;

        long divin =((long)div)<<31;
        long rem = (long)din;
        long quot =0;
        // cout<<divin<<endl<<din<<endl;
        for(int i=0;i<32;i++)
        {
            rem = rem - divin;
            // cout<<std::hex<<setw(12)<<quot<<"\t"<<setw(12)<<divin<<"\t"<<setw(12)<<rem<<endl;
            if(rem<0)
            {
                rem+=divin;
                quot<<1;
            }
            else
            {
                quot<<=1;
                quot|=1;
            }
            if(rem ==0)
                cout<<"1";
            else
                cout<<"0";
            // cout<<std::hex<<setw(12)<<quot<<"\t"<<setw(12)<<divin<<"\t"<<setw(12)<<rem<<endl;
            divin>>=1;
            // cout<<std::hex<<setw(12)<<quot<<"\t"<<setw(12)<<divin<<"\t"<<setw(12)<<rem<<endl;
            // cout<<"-------------------------------------\n";
        }   
        cout<<endl;

    }
        time_t ab = clock();

        double tl = (double)(ab-ab1)/CLOCKS_PER_SEC;
        printf("%lf\n",tl);




    return 1;
}