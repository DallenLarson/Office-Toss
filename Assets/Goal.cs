using UnityEngine;

namespace PolySpatial.Samples
{
public class Goal : MonoBehaviour
{
        [SerializeField]
        Transform m_RespawnPosition;
        [SerializeField]
        AudioSource winSound;

        [SerializeField]
        ParticleSystem confettiParticleSystem;
    private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.TryGetComponent(out PieceSelectionBehavior piece))
            {
                var pieceTransform = piece.transform;
                var pieceRigidbody = pieceTransform.GetComponent<Rigidbody>();
                pieceRigidbody.isKinematic = true;
                pieceTransform.position = m_RespawnPosition.position;
                pieceRigidbody.isKinematic = false;
            }

            // Check if the entering collider is the player
            if (other.CompareTag("Player"))
            {
                // Player entered the goal, trigger win condition
                Debug.Log("You Win!");

                // Play win sound
                if (winSound != null)
                {
                    winSound.Play();
                }

                // Activate confetti particle system
                if (confettiParticleSystem != null)
                {
                    confettiParticleSystem.Play();
                }
            }
        }
}

}