using System;

namespace UnityEditor.XR.VisionOS
{
    static class Json
    {
        [Serializable]
        public struct AuthorInfo
        {
            public int version;
            public string author;
        }

        [Serializable]
        public struct Filename
        {
            public string filename;
        }

        [Serializable]
        public struct ResourceGroup
        {
            public AuthorInfo info;
            public Filename[] resources;
        }

        [Serializable]
        public struct ImageProperties
        {
            public float width;
        }

        [Serializable]
        public struct ReferenceImage
        {
            public AuthorInfo info;
            public FilenameWithIdiom[] images;
            public ImageProperties properties;
        }

        [Serializable]
        public struct FilenameWithIdiom
        {
            public string filename;
            public string idiom;
        }

        [Serializable]
        public struct ObjectProperties
        {
            /// <summary>
            /// Preview filename (for example, `preview.jpg`).
            /// </summary>
            public string preview;

            /// <summary>
            /// An array of 4 floats representing the quaternion (x, y, z, w).
            /// </summary>
            public float[] rotation;

            /// <summary>
            /// cv3dmap filename (for example, `trackingData.cv3dmap`).
            /// </summary>
            public string content;

            /// <summary>
            /// An array of 3 floats representing the translation (x, y, z).
            /// </summary>
            public float[] translation;

            /// <summary>
            /// The version of the properties (for example, 1).
            /// </summary>
            public int version;
        }

        [Serializable]
        public struct ReferenceObject
        {
            public AuthorInfo info;
            public ObjectProperties properties;
        }
    }
}
