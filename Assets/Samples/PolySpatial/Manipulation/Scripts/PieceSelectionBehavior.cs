using UnityEngine;

namespace PolySpatial.Samples
{
    [RequireComponent(typeof(Rigidbody))]
    public class PieceSelectionBehavior : MonoBehaviour
    {
        [SerializeField]
        MeshRenderer m_MeshRenderer;

        [SerializeField]
        Material m_DefaultMat;

        [SerializeField]
        Material m_SelectedMat;

        Rigidbody m_RigidBody;

        public bool isPlayer;

        public AudioSource ass;
        public AudioSource ass2;

        public int selectingPointer { get; private set; } = ManipulationInputManager.k_Deselected;

        
        public float gravityStrength = 9.8f;

        void Start()
        {
            m_RigidBody = GetComponent<Rigidbody>();
        }

        void OnTriggerEnter(Collider other)
        {
            // Check if the collider entering the trigger is the player
            if (isPlayer && other.CompareTag("Player"))
            {
                // Play the hitsfx sound effect
                ass2.Play();
            }
        }

        public void SetSelected(int pointer)
{
    var isSelected = pointer != ManipulationInputManager.k_Deselected;
    selectingPointer = pointer;
    m_MeshRenderer.material = isSelected ? m_SelectedMat : m_DefaultMat;
    m_RigidBody.isKinematic = false;

    if (isPlayer && !isSelected)
    {
        // Apply an initial force when the object is released
        //Vector3 releaseForce = new Vector3(0f, 0.5f, 0f); // Adjust the force vector as needed
        //m_RigidBody.AddForce(releaseForce, ForceMode.Impulse);

        ass.Play();
    }
}

        public void Update()
        {
            if (isPlayer)
            {
                // Simulate fake gravity in the downward direction
                Vector3 fakeGravity = Vector3.down * gravityStrength;
                m_RigidBody.AddForce(fakeGravity, ForceMode.Acceleration);
            }
        }
    }
}
