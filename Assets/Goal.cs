using UnityEngine;
public class Goal : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        // Check if the entering collider is the paper ball
        if (other.CompareTag("Player"))
        {
            // Paper ball entered the goal, trigger win condition
            Debug.Log("You Win!");
        }
    }
}
