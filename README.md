
<img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/assets/147541354/c8083272-594b-4f2a-8723-61a078071781" alt="Image" style="width:600px; height:500px; display: block; margin: 0 auto;">



# PW-An Online Education Platform Portfolio
#### PW's Smart Data Structures: Enhancing Quality Education.
<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Prajwal Deshanur</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Portfolio Domain</dt>
<dd>Online education Platform:PW</dd>
</dl>

* * *

> A step towards enhancing PW's service.

This page hosts:

1. [🌱 Introduction](#introduction)
2. [💼 Need of Portfolio](#need-of-portfolio)
3. [🎯 Objectives](#objectives)
4. [📈 Business Use Cases](#business-use-cases)
5. [🧠 Learning and Key Takeaways](#learning-and-key-takeaways)
6. [📑 References](#references)

# Introduction
Implementation of efficient Datastructure and Algorithm in enhancing of students experience.
The advent of online education has changed the entire conventional process of learning. It made the students learn anything sitting at any corner across the country. Pandemic brought coaching institutions to teach students in the online domain. This brought great flexibility to the learning process and shortened the learning gap between the students.Since the pandemic, many online learning platforms have opened and offer various online courses from classes 6 to 12, IIT-JEE, NEET, etc.It eases the process of learning & understanding.

The sector that molds future generations is the education sector. By 2025, it is expected to grow to a $7 trillion worldwide business. The COVID-19 pandemic’s disruption sparked the growth of the ed-tech industry, which makes use of digital resources to deliver inclusive, interesting, and customized education. About $4 billion in private investment has been made in India’s ed-tech sector during the last five years. In the next ten years, it is expected to grow to be a $30 billion sector that supports and enhances traditional classroom teaching methods.
By using advanced algorithmic techniques and innovative data structures, this project aims to propose solutions to real-world business challenges. From giving a better approach for doubts and queries of students to improvision recommendation of courses.


# Need of Portfolio
The portfolio bridges academic concepts with practical applications, showcasing the ability to apply theoretical knowledge from DSA and APS courses to real-world challenges.It highlights not only the capability to solve practical problems but also a commitment to advancing the quality and effectiveness of the services, making it a valuable asset for educational innovation and professional growth in the education sector.Enhancing features such as personalized learning pathways, content recommendations, and performance analytics can significantly improve student engagement and satisfaction. 

# Objectives
**1.** Applying theoretical concepts from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) course to practical, real-world problems within the PW's platform. 

**2.** Addressing specific business challenges faced by PW platform through the application of algorithmic problem solving.

**3.** Improving data processing and analytics to provide valuable insights to PW's users for recommendation of courses.

**4.** Introduction of effective and optimal algorithms to enhance the services.

# Business Use Cases

### **1.Search Completion or suggestion in PW App**

- Trie and Inverted Index:The PW app delivers real-time search suggestions as students input queries, including course names, teacher names, and specific topics. It considers user preferences, past interactions, and academic trends to streamline the search process and enhance decision-making during peak study times.

**Challengs:**

- Database Management: Efficiently managing a vast and evolving database of courses, teachers, and educational content.
- Query Handling: Handling diverse user queries including typos, abbreviations, and varying specificity levels.
  
**Market Benifts:**

- Increased User Satisfaction: Personalized suggestions improve user experience and loyalty.
- Exploratory Learning: Encourages exploration of new courses and topics, enriching overall learning experiences.

Time Complexity:
Trie: O(m) for insertion and search operations, where m is the length of the key.
Inverted Index: O(1) on average for keyword lookups.

Space Complexity:
Trie: O(n * m) where n is the number of keys and m is the average length of keys.
Inverted Index: O(n * m) where n is the number of documents and m is the average length of documents.

Here is my code for: [InvertedIndex](Code/InvertedIndex.cpp),[Trie](Code/Trie.cpp).

### **2. Ranked Search Results for Physics Wallah App**

- Max-Heap (Priority Queue) Algorithm: To prioritize and display relavant search results.

**Limitations and Challengs:**
- Max-Heap: While effective for maintaining a priority queue of search results, it requires continual reordering as new results are added or user preferences change, which can impact real-time responsiveness.

- Ranking Algorithm: Accurately reflecting student preferences and adapting to real-time changes.
- Delivery Assurance: Ensuring search results are timely and efficiently managed.

**Market Benifts:**

- Increased Engagement: Maintains interest and participation, leading to higher retention.
- Enhanced User Experience: Ensures prompt delivery of relevant search results for a smooth user experience.

Time Complexity: O(log n) for insertion and extraction in the Max-Heap.

Space Complexity: O(n) proportional to the number of pending notifications.
 
Here is my code for:[Priority Queue](Code/Priority_Queue.cpp).

### **3. Real-Time Notifications**

- Min-Heap: To enhance student engagement and ensure timely delivery of updates.

**Limitations and Challengs:**

- Min-Heap: While efficient for prioritizing and managing notifications based on urgency, it requires continuous reordering as priorities change dynamically, potentially impacting performance in real-time scenarios with rapid updates.
  
- The primary challenge is creating a ranking algorithm that accurately reflects student preferences and priorities. This requires collecting and analyzing vast amounts of data, such as past enrollments, search history, and interactions with the app. The algorithm also needs to adapt to real-time changes, such as course availability or new teacher ratings.

**Market Benifts:**
- Improved Communication: Timely notifications keep students informed about course updates, deadlines, and new content, enhancing their overall learning experience.
- Increased Engagement: Regular and relevant updates help maintain student interest and participation, leading to higher retention rates.
- Enhanced User Experience: Efficient notification management ensures that students receive updates without delay, contributing to a smooth and responsive user experience.

Time Complexity: O(log n) for insertion and extraction in the Min-Heap.

Space Complexity: O(n) proportional to the number of pending notifications.
 
Here is my code:[Min-Heap](Code/Min_Heap.cpp)

### **4. PW Store for Merchandise, Books, and Student-Related Items**

- Inventory Management and Personalized Recommendations
Balanced Binary Search Tree (BST) for Inventory Management:
- To efficiently manage inventory, the PW Store uses a Red-Black Tree. This data structure allows for efficient insertions, deletions, and searches, ensuring the inventory is always accurately maintained and can be queried quickly.

- Collaborative Filtering for Personalized Recommendations:
To enhance the shopping experience, the store employs collaborative filtering algorithms. This approach provides tailored product recommendations based on user preferences and purchase history, helping to increase engagement and sales.

**Limitations**
- Hash Table for Inventory Management: While hash tables provide O(1) average time complexity for insertions and lookups, they are not suitable for range queries, which are essential for managing inventory levels and filtering items based on price or category.
- Simple List for Personalized Recommendations: A simple list would require O(n) time complexity for searching and filtering recommendations, making it inefficient for real-time use with a large number of users and items.

**Market Benifts:**
- Enhanced Shopping Experience: Seamless and intuitive shopping increases customer satisfaction and sales.
- Improved Inventory Management: Efficient tracking reduces stockouts and overstock situations.

Time Complexity: O(log n) for insertions, deletions, and searches.

Space Complexity: O(n).

Here is my code:[Red-Black Tree](Code/Red_Black_Tree.cpp).

### **5. Real-Time Course Progress Tracking**

- Segment Tree: The platform tracks students' course progress in real-time, providing timely insights and updates on completed and pending lessons. This allows both students and educators to monitor progress accurately and make data-driven decisions.
  
**Limitations**

- Real-Time Updates: Ensuring progress data is updated promptly as students complete lessons.
- Data Aggregation: Efficiently aggregating and summarizing progress across multiple courses.

**Market Benifts:**
- Enhanced User Experience: Provides students with timely feedback on their progress, keeping them motivated.
- Improved Learning Outcomes: Helps students and educators identify areas needing attention, ensuring timely interventions.
- Data-Driven Insights: Allows educators to make informed decisions based on accurate progress data.

Time Complexity: O(log n) for range queries and updates.

Space Complexity: O(n).

 Here is my code:[Segment Tree](Code/Segment_Tree.cpp)

### **6.Nearby Location Student Profiles Auto-Suggestion**

- K-D Tree: The platform provides auto-suggestions for student profiles based on nearby locations, allowing users to connect with other students in their locality for study groups, collaborations, or social interactions.
  
**Limitations and Challengs**

- Efficient Spatial Queries: Managing spatial data efficiently to provide real-time suggestions.
- Accuracy: Ensuring the accuracy of location data and relevance of suggestions.

**Market Benifts:**
- Enhanced Social Learning: Encourages students to form study groups and collaborate with peers nearby.
- Increased Engagement: Promotes active participation and interaction among students.
  
Time Complexity:
Insertion: O(log n) for inserting a student profile into the K-D Tree.
Nearest Neighbor Search: O(log n) for querying nearby student profiles.

Space Complexity: O(n) proportional to the number of student profiles.

Here is my Code:[K-D Trees](Code/KD-Trees.cpp)

### **8.Trending Course Identification**

- Quick Sort: The platform identifies trending courses based on recent enrollments and user interactions, displaying these courses prominently to users. This helps students stay updated with popular courses and aligns the platform's offerings with current trends.
  
**Limitations and Challengs**

- Efficient Data Handling: Managing and sorting the massive volume of course interaction data generated by user enrollments and activity.
  
**Market Benifts:**

- Increased Engagement: Highlighting trending courses attracts user attention and encourages enrollments.
- Revenue Growth: Driving more enrollments in trending courses can increase revenue.

Time Complexity: The average time complexity of Quick Sort is O(n log n), where n is the number of courses.

Space Complexity: The space complexity of Quick Sort is O(log n) for the in-place version, which is needed for the recursion stack.

Here is my Code:[Quick Sort](Code/Quick_Sort.cpp)

### **9.Finding All Vidyapeeth (Offline Classes) for Students**

-  K-D Trees: Physics Wallah App aims to provide students with quick and accurate information about nearby offline classes (Vidyapeeth). By utilizing geospatial data structures like k-d trees to store and query locations of offline classes, the platform can efficiently find all Vidyapeeth within a specified radius of the student's location, enhancing their learning experience.
  
**Limitations and Challengs**

- Edge Cases: Handling scenarios where students are in areas with limited or no nearby offline classes, requiring the system to provide alternative suggestions or solutions.
  
**Market Benifts:**

- Enhanced User Experience: Provides quick and convenient access to information about nearby offline classes, improving the overall learning experience.
- Community Building: Supports local educational institutions by increasing their visibility and fostering stronger community ties.

  

Time Complexity: k-d Trees provide O(log n) average time complexity for range queries, where n is the number of Vidyapeeth locations.

Space Complexity: k-d Trees require O(n) space complexity, where n is the number of Vidyapeeth locations.

Here is my Code:[K-D Trees](Code/KD-Trees.cpp)

### **10. Matching Students with Saarthi Personal Teachers and Rank-Producing Educators**

-  Assignment Problem Algorithm : Physics Wallah aims to enhance its VP Live service by efficiently matching students with Saarthi personal teachers and rank-producing educators. This involves using the assignment problem algorithm to allocate resources (teachers) to tasks (students) in an optimal way, ensuring personalized attention and improving academic outcomes.
  
**Limitations and Challengs**

- Optimal Matching: Ensuring the best possible match between students and teachers based on preferences, availability, and expertise.
- Dynamic Adjustments: Continuously updating assignments as new students enroll and teacher availability changes.
  
**Market Benifts:**

- Efficient Resource Allocation: Ensures that the best teachers are matched with students who can benefit the most, maximizing educational impact.
- Competitive Advantage: Differentiates the platform by offering high-quality, personalized education services.

Time Complexity: The Hungarian algorithm has a time complexity of O(n^3), where n is the number of students or teachers.

Space Complexity: The space complexity is O(n^2), as it requires storing the cost matrix and auxiliary data structures.

Here is my code:[Job Assignment](Code/job_assignment.cpp)

### **10. Efficient Video Transcoding for Enhanced Student Experience**

-  Huffman Coding: Physics Wallah aims to enhance the student experience by efficiently handling video uploads for its VP Live service and other educational content. Given the high volume of video data generated by interactive classes and educational material, an efficient transcoding system is crucial. This involves using HEVC for video compression and Huffman Coding for compressing metadata, ensuring that videos are processed and made available in multiple formats and resolutions with minimal latency.
  
**Limitations and Challengs**

- Handling Large Video Data: Efficiently processing and storing massive amounts of video data uploaded by educators.
- Fast Video Processing: Minimizing the time required for transcoding videos to ensure quick availability for students.
- Metadata Compression: Compressing a significant amount of metadata, including video duration, titles, descriptions, tags, subtitles, and thumbnails.
  
**Market Benifts:**

- Efficient Data Storage: Reduces storage requirements by compressing videos and metadata efficiently, lowering costs.
- Continuous Playback on All Devices: Ensures that videos are available in multiple formats and resolutions, providing seamless playback on various devices and network conditions.
- Enhanced User Experience: Minimizes latency in video availability, ensuring students can access content quickly and without interruptions.

Time Complexity: O(n*log(n)), where n is the number of unique characters in the metadata.

Space Complexity: O(n), for storing the Huffman tree and encoded data.

Here is my Code:[Huffman Coding](Code/hufman_coding.cpp)

### **11. Personalized Playlist for Students on Physics Wallah App**

- Topological Sort: Physics Wallah allows students to save personalized playlists for future viewing. This feature organizes educational videos, ensuring that related content is recommended in the correct sequence. For example, if a student is watching "Physics Class 12 - Kinematics Part 1," subsequent parts will be suggested in a linear and logical order. By treating each video as a node in a Directed Acyclic Graph (DAG) and using topological sort, the app can recommend videos in the appropriate sequence based on their dependencies.
  
**Limitations and Challengs**

- Processing Dependencies: Accurately identifying and processing dependencies between videos to ensure correct sequencing.
- Metadata Management: Manual curation and management of video metadata to support the topological sorting algorithm.
- New Content Integration: Ensuring that newly added videos are seamlessly integrated into existing playlists without disrupting the sequence.
  
**Market Benifts:**

- Enhanced Flexibility: Allows students to create and manage personalized playlists, providing a more flexible learning experience.
- Improved Learning Path: Ensures that students follow a logical progression in their learning materials, enhancing comprehension and retention.
- Increased Engagement: By recommending the next relevant video, students are more likely to continue watching and engaging with the content.
  
Time Complexity: O(V + E), where V is the number of videos and E is the number of dependencies.

Space Complexity: O(V), as the extra space is needed for the stack used in the DFS-based topological sort.

Here is my Code:[Topological Sort](Code/Topological_Sort.cpp)

### **12.  Load Balancing for Physics Wallah's Online Classes**

- Weighted Round Robin Load Balancing: Physics Wallah provides live online classes, which can attract a high number of concurrent users, especially during peak times. To ensure smooth streaming and minimal latency, load balancing techniques are used to distribute user requests efficiently across multiple servers. This prevents any single server from becoming a bottleneck and ensures a high-quality user experience.
  
**Limitations and Challengs**

- Dynamic Traffic Patterns: Handling varying numbers of users logging in simultaneously during class hours, which can lead to spikes in server load.
- Resource Utilization: Ensuring efficient use of server resources, such as CPU, memory, and bandwidth, to prevent any server from being overburdened.
- Server Health Monitoring: Continuously monitoring server health metrics to direct traffic to the most capable servers.

**Market Benifts:**

- Scalability: Ability to handle a large number of simultaneous users without degrading performance.
- Availability: High availability of services due to reduced chances of server overload, ensuring that classes are not interrupted.
- Enhanced User Experience: Smooth and uninterrupted streaming of live classes, leading to higher student satisfaction and retention.

Time Complexity: O(1) per request if the number of servers is static.

Space Complexity: O(N), where N is the number of servers.

Here is my Code:[Round Robin](Code/RR.cpp)

### **13. Fast Access to Recently Viewed Videos**

- Last-In-First-Out (LIFO) Stack: Physics Wallah wants to provide students with fast access to their most recently viewed videos. By using a LIFO stack, the platform can maintain the most recent video views in chronological order, allowing students to quickly return to their recent content.
**Limitations and Challengs**

- Real-Time Updates: Ensuring that the stack is updated in real-time with the latest video views to reflect the most current activity.
- Content Management: Managing a diverse range of video content and ensuring that the stack operations remain efficient even with a high volume of recent views.
- User Engagement: Enhancing user engagement by providing quick access to recently viewed videos, encouraging continuous learning and easy content resumption.

  
**Market Benifts:**

- Real-Time Updates: Enables immediate access to the latest videos viewed by students, supporting a dynamic and user-friendly interface.
- Personalization: Allows for personalized recommendations based on recent video interactions, enhancing the user experience.
- Engagement Metrics: Supports the measurement and analysis of user engagement through tracking of recent video views and content preferences.
  
Time Complexity:
Push Operation: O(1) - Adding a recently viewed video to the stack.
Pop Operation: O(1) - Removing the most recently viewed video from the stack.

Space Complexity:O(n), where n is the number of recent videos stored in the stack. This ensures efficient use of memory for managing recent video views.

Here is my Code:[LIFO](Code/Lifo/Lifo.cpp)

# Learning and Key Takeaways

This portfolio demonstrates how strategic choices in data structures and algorithms can effectively address specific business challenges across various domains. Each case applies suitable algorithms, discusses obstacles, and underscores the benefits and design strategies involved. It illustrates how theoretical concepts from APS and DSA classes directly solve practical problems, emphasizing efficiency and practical application.

By bridging theory with real-world scenarios, this portfolio showcases the substantial impact of well-chosen algorithms and data structures on service enhancement. It underscores the value of algorithm understanding in driving innovation and operational efficiency across different sectors, offering valuable insights for both learning and practical implementation.

# References



[1]Physcics Wallah, [https://www.pw.live/](https://www.pw.live/)

[2] Inverted Index Code,[https://www.geeksforgeeks.org/inverted-index/](https://www.geeksforgeeks.org/inverted-index/)

[3] Trie Code,[https://www.geeksforgeeks.org/trie-insert-and-search/](https://www.geeksforgeeks.org/trie-insert-and-search/)

[4] François Aubry, "Graphs - Topological sort",INGInious, [https://inginious.org/course/competitive-programming/graphs-toposort](https://inginious.org/course/competitive-programming/graphs-toposort)

[5] Quora PW Business Model,https:[//www.quora.com/What-is-the-business-model-of-Physics-Wallah](//www.quora.com/What-is-the-business-model-of-Physics-Wallah)

[6], Yasin,KD Trees,[https://codeofcode.org/lessons/kd-trees-in-cpp/](https://codeofcode.org/lessons/kd-trees-in-cpp/)

[7] Sebastian De Lima, "A quick explanation of DFS & BFS (Depth First Search & Breadth-First Search)", Medium, [https://medium.com/analytics-vidhya/a-quick-explanation-of-dfs-bfs-depth-first-search-breadth-first-search-b9ef4caf952c](https://medium.com/analytics-vidhya/a-quick-explanation-of-dfs-bfs-depth-first-search-breadth-first-search-b9ef4caf952c)

[8] locus, "Traveling Salesman Problem Visualization",[https://blog.locus.sh/travelling-salesman-problem-and-how-can-tech-solve-it/](https://blog.locus.sh/travelling-salesman-problem-and-how-can-tech-solve-it/)

[9] Job Assignment,[https://www.geeksforgeeks.org/job-assignment-problem-using-branch-and-bound/](https://www.geeksforgeeks.org/job-assignment-problem-using-branch-and-bound/)

[10] Huffman Coding Algorithm,https:[//www.programiz.com/dsa/huffman-coding.](//www.programiz.com/dsa/huffman-coding.
)
