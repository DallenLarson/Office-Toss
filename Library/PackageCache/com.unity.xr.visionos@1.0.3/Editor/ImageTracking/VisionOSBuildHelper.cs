using System.Collections.Generic;
using System.Linq;

namespace UnityEditor.XR.VisionOS
{
    static class VisionOSBuildHelper
    {
        public static IEnumerable<T> AssetsOfType<T>() where T : UnityEngine.Object =>
            AssetDatabase.FindAssets($"t:{typeof(T).Name}")
                .Select(AssetDatabase.GUIDToAssetPath)
                .Select(AssetDatabase.LoadAssetAtPath<T>);
    }
}
