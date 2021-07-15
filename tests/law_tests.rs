
// fn arb_extraction() -> impl Strategy<Value = Extraction> {
//     (any::<Vec<(String, Option<String>)>>(), any::<Vec<(String, String)>>(), any::<HashMap<String, ConfigVal>>()).prop_map(|(refs, sources, config)| {
//         Extraction {
//             refs: refs,
//             sources: sources,
//             configs: HashMap::new(),
//         }
//     })
// }

// fn arb_config_val() -> impl Strategy<Value = ConfigVal> {
//     let leaf = prop_oneof![
//         any::<bool>().prop_map(ConfigVal::BoolC),
//         ".*".prop_map(ConfigVal::StringC),
//     ];

//     leaf.prop_recursive(
//       3, // 3 levels deep
//       5, // Shoot for maximum size of 5 nodes
//       10, // We put up to 10 items per collection
//       |inner| prop_oneof![
//           // Take the inner strategy and make the two recursive cases.
//           prop::collection::vec(inner.clone(), 0..10)
//               .prop_map(ConfigVal::ListC),
//           prop::collection::hash_map(".*", inner, 0..10)
//               .prop_map(ConfigVal::DictC),
//       ])
// }

// #[cfg(feature = "proptest")]
// proptest! {
//     #![proptest_config(ProptestConfig::with_cases(100))]

//     #[test]
//     fn left_and_right_identity(x: Extraction) {
//         let mempty = Extraction::new();
//         assert_eq!(x, mempty.mappend(&x));
//         assert_eq!(x, x.mappend(&mempty));
//     }

//     #[test]
//     fn associativity(x: Extraction, y: Extraction, z: Extraction) {
//         assert_eq!(
//             x.mappend(&y).mappend(&z),
//             x.mappend(&y.mappend(&z))
//         );
//     }
// }

#[cfg(feature = "proptest")]
mod prop_tests {
    use dbt_extractor::{Extraction};
    use proptest::prelude::*;

    proptest! {
        //#![proptest_config(ProptestConfig::with_cases(100))]
    
        #[test]
        fn left_and_right_identity(x: Extraction) {
            let mempty = Extraction::new();
            assert_eq!(x, mempty.mappend(&x));
            assert_eq!(x, x.mappend(&mempty));
        }
    
        #[test]
        fn associativity(x: Extraction, y: Extraction, z: Extraction) {
            assert_eq!(
                x.mappend(&y).mappend(&z),
                x.mappend(&y.mappend(&z))
            );
        }
    }

}