class AllParties
{
	
}
class BJP : AllParties
{
	String candidateName;
	int count;
	public BJP(String candidateName) 
	{
		this->candidateName = candidateName;
	}
	public void countVote() 
	{
		this.count++;
	}
	int getVote() 
	{
		return count;
	}
}
class AAP : AllParties
{
	String candidateName;
	int count;
	public AAP(String candidateName) 
	{
		this->candidateName = candidateName;
	}
	public void countVote() 
	{
		this->count++;
	}
	int getVote() 
	{
		return count;
	}
}
class Congress : AllParties
{
	String candidateName;
	int count;
	public Congress(String candidateName) 
	{
		this.candidateName = candidateName;
	}
	public void countVote() 
	{
		this->count++;
	}
	int getVote() 
	{
		return count;
	}
}
public class VotingCls 
{
	public static void main(String[] args) 
	{
		int option;
		int bjpVotes;
		int congressVotes;
		int aapVotes;
		byte[] positionStatus={0,0,0};
		AllParties nm = new BJP("BJP");
		AllParties ap = new AAP("AAP");
		AllParties rg = new Congress("Congress");
		Scanner sc1 = new Scanner(System.in);
		while (true) 
		3{
			System.out.print("\n\t1. Congress\n\t2. BJP\n\t3. AAP\n\t4.Exit");
			System.out.print("\n\tcaste your vote : ");
			option = sc1.nextInt();
			if (option == 1) {
				rg.countVote();
			} else if (option == 2) {
				nm.countVote();
			} else if (option == 3) {
				ap.countVote();
			} else if (option == 4) {
				break;
			} else {
				System.out.println("\tIncorrect option");
			}
		}
		bjpVotes = nm.getVote();
		congressVotes = rg.getVote();
		aapVotes = ap.getVote();
}


