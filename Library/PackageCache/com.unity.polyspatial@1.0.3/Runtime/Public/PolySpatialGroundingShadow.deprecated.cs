using System;
using UnityEngine;

namespace Unity.PolySpatial
{
    // A "tag" component indicating that the corresponding GameObject should cast a grounding shadow.
    // To function, the GameObject must also have a MeshRenderer (to cast the shadow).
    [Obsolete("PolySpatialGroundingShadow has been deprecated.  Use VisionOSGroundingShadow instead (UnityUpgradable) -> VisionOSGroundingShadow", true)]
    public class PolySpatialGroundingShadow : MonoBehaviour
    {
    }
}
