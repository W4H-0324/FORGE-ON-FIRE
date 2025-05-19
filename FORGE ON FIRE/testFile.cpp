//#include "gtest/gtest.h"
//#include "Materials.h"
//#include "Weapons.h"
//
//// Material Tests
//TEST(MaterialTest, DiamondProperties) {
//    Diamond diamond;
//    EXPECT_EQ(diamond.matName(), "Diamond");
//    EXPECT_EQ(diamond.matDmg(), 90);
//    EXPECT_EQ(diamond.matDur(), 100);
//}
//
//TEST(MaterialTest, GoldProperties) {
//    Gold gold;
//    EXPECT_EQ(gold.matName(), "Gold");
//    EXPECT_EQ(gold.matDmg(), 80);
//    EXPECT_EQ(gold.matDur(), 40);
//}
//
//TEST(MaterialTest, IronProperties) {
//    Iron iron;
//    EXPECT_EQ(iron.matName(), "Iron");
//    EXPECT_EQ(iron.matDmg(), 50);
//    EXPECT_EQ(iron.matDur(), 80);
//}
//
//TEST(MaterialTest, WoodProperties) {
//    Wood wood;
//    EXPECT_EQ(wood.matName(), "Wood");
//    EXPECT_EQ(wood.matDmg(), 20);
//    EXPECT_EQ(wood.matDur(), 30);
//}
//
//// Weapon Tests (use EXPECT_NEAR for damage)
//TEST(WeaponTest, SwordWithDiamond) {
//    auto mat = make_unique<Diamond>();
//    Sword sword(move(mat));
//    EXPECT_EQ(sword.wepName(), "Sword");
//    EXPECT_EQ(sword.matName(), "Diamond");
//    EXPECT_NEAR(sword.totalDmg(), 90 * 1.4, 0.01);
//    EXPECT_EQ(sword.totalDur(), 100);
//}
//
//TEST(WeaponTest, ClaymoreWithGold) {
//    auto mat = make_unique<Gold>();
//    Claymore claymore(move(mat));
//    EXPECT_EQ(claymore.wepName(), "Claymore");
//    EXPECT_EQ(claymore.matName(), "Gold");
//    EXPECT_NEAR(claymore.totalDmg(), 80 * 1.8, 0.01);
//    EXPECT_EQ(claymore.totalDur(), 40);
//}
//
//TEST(WeaponTest, KatanaWithIron) {
//    auto mat = make_unique<Iron>();
//    Katana katana(move(mat));
//    EXPECT_EQ(katana.wepName(), "Katana");
//    EXPECT_EQ(katana.matName(), "Iron");
//    EXPECT_NEAR(katana.totalDmg(), 50 * 1.4, 0.01);
//    EXPECT_EQ(katana.totalDur(), 80);
//}
//
//TEST(WeaponTest, NinjatoWithWood) {
//    auto mat = make_unique<Wood>();
//    Ninjato ninjato(move(mat));
//    EXPECT_EQ(ninjato.wepName(), "Ninjato");
//    EXPECT_EQ(ninjato.matName(), "Wood");
//    EXPECT_NEAR(ninjato.totalDmg(), 20 * 1.6, 0.01);
//    EXPECT_EQ(ninjato.totalDur(), 30);
//}
