
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

PhysicsWallah, India’s newest edtech unicorn, expects its FY23 revenue to exceed Rs 1,200 crore, driven by high demand for its courses. Contrary to the perceived slowdown in online learning, the company has seen a 2-2.5x growth in online course subscriptions this year. While marketing expenses have increased, PhysicsWallah aims to close the year with a 40-45% EBITDA margin. The company has already reached Rs 350 crore in revenue in the first quarter, with projections of Rs 1,000-1,200 crore by year-end.


# Need of Portfolio
The portfolio bridges academic concepts with practical applications, showcasing the ability to apply theoretical knowledge from DSA and APS courses to real-world challenges.It highlights not only the capability to solve practical problems but also a commitment to advancing the quality and effectiveness of the services, making it a valuable asset for educational innovation and professional growth in the education sector.Enhancing features such as personalized learning pathways, content recommendations, and performance analytics can significantly improve student engagement and satisfaction. 

# Objectives
**1.** Applying theoretical concepts from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) course to practical, real-world problems within the PW's platform. 

**2.** Addressing specific business challenges faced by PW platform through the application of algorithmic problem solving.

**3.** Improving data processing and analytics to provide valuable insights to PW's users for recommendation of courses.

**4.** Introduction of effective and optimal algorithms to enhance the services.

# Business Use Cases

### **1.Search Completion or suggestion in PW App**

- **Trie and Inverted Index:** The PW app delivers real-time search suggestions as students input queries, including course names, teacher names, and specific topics. It considers user preferences, past interactions, and academic trends to streamline the search process and enhance decision-making during peak study times.



**Limitations:**

-  Efficiently managing a vast and evolving database of courses, teachers, and educational content.
-  Handling diverse user queries including typos, abbreviations, and varying specificity levels.
  
**Market Benifts:**

- Increased User Satisfaction: Personalized suggestions improve user experience and loyalty.
- Exploratory Learning: Encourages exploration of new courses and topics, enriching overall learning experiences.

Time Complexity:
Trie: O(m) for insertion and search operations.
Inverted Index: O(1).

Space Complexity:
Trie: O(n * m).
Inverted Index: O(n * m).

Here is my code for: [InvertedIndex](Code/InvertedIndex.cpp),[Trie](Code/Trie.cpp).

### **2. Ranked Search Results for Physics Wallah App**

- **Max-Heap** : To prioritize and display relavant search results.
 <p align="center">
  <img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/blob/main/assests/pq.gif" style="width: 400px; height: auto;"  alt="OLA">
<br>
   
**Challengs:**
- Max-Heap: While effective for maintaining a priority queue of search results, it requires continual reordering as new results are added or user preferences change, which can impact real-time responsiveness.

-  Accurately reflecting student preferences and adapting to real-time changes.
-  Ensuring search results are timely and efficiently managed.

**Market Benifts:**

-  Maintains interest and participation, leading to higher retention.
-  Ensures prompt delivery of relevant search results for a smooth user experience.

Time Complexity: O(log n).

Space Complexity: O(n).
 
Here is my code for:[Priority Queue](Code/Priority_Queue.cpp).

### **3. Real-Time Notifications**

- **Min-Heap:** To enhance student engagement and ensure timely delivery of updates.
  
<p align="center">
  <img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/blob/main/assests/min.gif" style="width: 400px; height: auto;"  alt="OLA">
<br>
  
**Limitations:**

-  While efficient for prioritizing and managing notifications based on urgency, it requires continuous reordering as priorities change dynamically, potentially impacting performance in real-time scenarios with rapid updates.
  
- The primary challenge is creating a ranking algorithm that accurately reflects student preferences and priorities. This requires collecting and analyzing vast amounts of data, such as past enrollments, search history, and interactions with the app. The algorithm also needs to adapt to real-time changes, such as course availability or new teacher ratings.

**Market Benifts:**
-  Timely notifications keep students informed about course updates, deadlines, and new content, enhancing their overall learning experience.
- Regular and relevant updates help maintain student interest and participation, leading to higher retention rates.
-  Efficient notification management ensures that students receive updates without delay, contributing to a smooth and responsive user experience.

Time Complexity: O(log n) for insertion and extraction in the Min-Heap.

Space Complexity: O(n) proportional to the number of pending notifications.
 
Here is my code:[Min-Heap](Code/Min_Heap.cpp)

### **4. PW Store for Merchandise, Books, and Student-Related Items**

- Inventory Management and Personalized Recommendations
Balanced Binary Search Tree (BST) for Inventory Management:
- To efficiently manage inventory, the PW Store uses a **Red-Black Tree**. This data structure allows for efficient insertions, deletions, and searches, ensuring the inventory is always accurately maintained and can be queried quickly.

**Limitations**
-  While hash tables provide O(1) average time complexity for insertions and lookups, they are not suitable for range queries, which are essential for managing inventory levels and filtering items based on price or category.
- A simple list would require O(n) time complexity for searching and filtering recommendations, making it inefficient for real-time use with a large number of users and items.

**Market Benifts:**
-  Seamless and intuitive shopping increases customer satisfaction and sales.
-  Efficient tracking reduces stockouts and overstock situations.

Time Complexity: O(log n) for insertions, deletions, and searches.

Space Complexity: O(n).

Here is my code:[Red-Black Tree](Code/Red_Black_Tree.cpp).

### **5. Real-Time Course Progress Tracking**

- **Segment Tree:** The platform tracks students' course progress in real-time, providing timely insights and updates on completed and pending lessons. This allows both students and educators to monitor progress accurately and make data-driven decisions.
  
  <p align="center">
  <img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/blob/main/assests/segment.gif" style="width: 400px; height: auto;"  alt="OLA">
<br>

**Limitations**

-  Ensuring progress data is updated promptly as students complete lessons.
-  Efficiently aggregating and summarizing progress across multiple courses.

**Market Benifts:**
-  Provides students with timely feedback on their progress, keeping them motivated.
-  Helps students and educators identify areas needing attention, ensuring timely interventions.
-  Allows educators to make informed decisions based on accurate progress data.

Time Complexity: O(log n) for range queries and updates.

Space Complexity: O(n).

 Here is my code:[Segment Tree](Code/Segment_Tree.cpp)

### **6.Nearby Location Student Profiles Auto-Suggestion**

- **K-D Tree:** The platform provides auto-suggestions for student profiles based on nearby locations, allowing users to connect with other students in their locality for study groups, collaborations, or social interactions.
  <p align="center">
  <img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/blob/main/assests/KD-Tree.gif" style="width: 400px; height: auto;"  alt="OLA">
<br>

**Limitations**

-  Managing spatial data efficiently to provide real-time suggestions.
-  Ensuring the accuracy of location data and relevance of suggestions.

**Market Benifts:**
- Encourages students to form study groups and collaborate with peers nearby.
- Promotes active participation and interaction among students.
  
Time Complexity:
Insertion: O(log n) for inserting a student profile into the K-D Tree.

Space Complexity: O(n) proportional to the number of student profiles.

Here is my Code:[K-D Trees](Code/KD-Trees.cpp)

### **7.Trending Course Identification**

- **Quick Sort:** The platform identifies trending courses based on recent enrollments and user interactions, displaying these courses prominently to users. This helps students stay updated with popular courses and aligns the platform's offerings with current trends.
  
**Limitations**

- Managing and sorting the massive volume of course interaction data generated by user enrollments and activity.
  
**Market Benifts:**

-  Highlighting trending courses attracts user attention and encourages enrollments.
-  Driving more enrollments in trending courses can increase revenue.

Time Complexity: O(n log n).

Space Complexity:  O(log n).

Here is my Code:[Quick Sort](Code/Quick_Sort.cpp)

### **8.Finding nearby Vidyapeeth (Offline Classes) for Students**

-  **K-D Trees:** Students with quick and accurate information about nearby offline classes (Vidyapeeth). By utilizing geospatial data structures like k-d trees to store and query locations of offline classes, the platform can efficiently find all Vidyapeeth within a specified radius of the student's location, enhancing their learning experience.
  
**Limitations**

-  Handling scenarios where students are in areas with limited or no nearby offline classes, requiring the system to provide alternative suggestions or solutions.
  
**Market Benifts:**

- Provides quick and convenient access to information about nearby offline classes, improving the overall learning experience.
-  Supports local educational institutions by increasing their visibility and fostering stronger community ties.

  

Time Complexity: k-d Trees provide O(log n) average time complexity for range queries, where n is the number of Vidyapeeth locations.

Space Complexity: k-d Trees require O(n) space complexity, where n is the number of Vidyapeeth locations.

Here is my Code:[K-D Trees](Code/KD-Trees.cpp)

### **9. Matching Students with Saarthi Personal Teachers and Rank-Producing Educators**

-  **Assignment Problem:** The application has VP Live service by efficiently matching students with Saarthi personal teachers and rank-producing educators. This involves using the assignment problem algorithm to allocate resources (teachers) to tasks (students) in an optimal way, ensuring personalized attention and improving academic outcomes.
  
**Limitations**

-  Ensuring the best possible match between students and teachers based on preferences, availability, and expertise.
-  Continuously updating assignments as new students enroll and teacher availability changes.
  
**Market Benifts:**

-  Ensures that the best teachers are matched with students who can benefit the most, maximizing educational impact.
-  Differentiates the platform by offering high-quality, personalized education services.

Time Complexity:  O(n^3), where n is the number of students or teachers.

Space Complexity: O(n^2).

Here is my code:[Job Assignment](Code/job_assignment.cpp)

### **10. Efficient Video Transcoding for Enhanced Student Experience**

-  **Huffman Coding:** The algorithm aims in  handling the video uploads for its VP Live service and other educational content. Given the high volume of video data generated by interactive classes and educational material, an efficient transcoding system is crucial. This involves using HEVC for video compression and Huffman Coding for compressing metadata, ensuring that videos are processed and made available in multiple formats and resolutions with minimal latency.

<p align="center">
  <img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/blob/main/assests/Huffman_huff_demo.gif" style="width: 400px; height: auto;"  alt="OLA">
<br>
  
**Limitations**

-  Minimizing the time required for transcoding videos to ensure quick availability for students.
-  Compressing a significant amount of metadata, including video duration, titles, descriptions, tags, subtitles, and thumbnails.
  
**Market Benifts:**

-  Reduces storage requirements by compressing videos and metadata efficiently, lowering costs.
-  Ensures that videos are available in multiple formats and resolutions, providing seamless playback on various devices and network conditions.


Time Complexity: O(n*log(n)), where n is the number of unique characters in the metadata.

Space Complexity: O(n), for storing the Huffman tree and encoded data.

Here is my Code:[Huffman Coding](Code/hufman_coding.cpp)

### **11. Personalized Playlist for Students on Physics Wallah App**

- **Topological Sort:** The algorithm enables to save personalized playlists for future viewing. This feature organizes educational videos, ensuring that related content is recommended in the correct sequence. For example, if a student is watching "Physics Class 12 - Kinematics Part 1," subsequent parts will be suggested in a linear and logical order. By treating each video as a node in a Directed Acyclic Graph (DAG) and using topological sort, the app can recommend videos in the appropriate sequence based on their dependencies.

  <p align="center">
  <img src="https://github.com/PrajwalMDeshanur/Youtube.github.io/blob/main/assests/topo.gif" style="width: 400px; height: auto;"  alt="OLA">
<br>

**Limitations**

-  Accurately identifying and processing dependencies between videos to ensure correct sequencing.
-  Manual curation and management of video metadata to support the topological sorting algorithm.
- New Content Integration: Ensuring that newly added videos are seamlessly integrated into existing playlists without disrupting the sequence.
  
**Market Benifts:**

-  Allows students to create and manage personalized playlists, providing a more flexible learning experience.
-  Ensures that students follow a logical progression in their learning materials, enhancing comprehension and retention.
-  By recommending the next relevant video, students are more likely to continue watching and engaging with the content.
  
Time Complexity: O(V + E).

Space Complexity: O(V).

Here is my Code:[Topological Sort](Code/Topological_Sort.cpp)

### **12.  Load Balancing for Physics Wallah's Online Classes**

- **Round Robin Load Balancing** : To allow high number of concurrent users, especially during peak times. To ensure smooth streaming and minimal latency, load balancing techniques are used to distribute user requests efficiently across multiple servers. This prevents any single server from becoming a bottleneck and ensures a high-quality user experience.
  
**Limitations**

- Handling varying numbers of users logging in simultaneously during class hours, which can lead to spikes in server load.
-  Continuously monitoring server health metrics to direct traffic to the most capable servers.

**Market Benifts:**

- Ability to handle a large number of simultaneous users without degrading performance.
- High availability of services due to reduced chances of server overload, ensuring that classes are not interrupted.
- Smooth and uninterrupted streaming of live classes, leading to higher student satisfaction and retention.

Time Complexity: O(1).

Space Complexity: O(N).

Here is my Code:[Round Robin](Code/RR.cpp)

### **13. Fast Access to Recently Viewed Videos**

- **Last-In-First-Out (LIFO) Stack:** To  access to their most recently viewed videos. By using a LIFO stack, the platform can maintain the most recent video views in chronological order, allowing students to quickly return to their recent content.
  
**Challengs**

- Ensuring that the stack is updated in real-time with the latest video views to reflect the most current activity.
- Managing a diverse range of video content and ensuring that the stack operations remain efficient even with a high volume of recent views.
-  Enhancing user engagement by providing quick access to recently viewed videos, encouraging continuous learning and easy content resumption.

  
**Market Benifts:**

-  Enables immediate access to the latest videos viewed by students, supporting a dynamic and user-friendly interface.
-  Allows for personalized recommendations based on recent video interactions, enhancing the user experience.
-  Supports the measurement and analysis of user engagement through tracking of recent video views and content preferences.
  
Time Complexity:
Push Operation: O(1) - Adding a recently viewed video to the stack.
Pop Operation: O(1) - Removing the most recently viewed video from the stack.

Space Complexity:O(n), where n is the number of recent videos stored in the stack. This ensures efficient use of memory for managing recent video views.

Here is my Code:[LIFO](Code/Lifo/Lifo.cpp)

### **14. Tagging New Courses on the Platform**

-**Time-Based Window Algorithm:** To enhance the student experience, the platform needs to tag newly added courses as "new" and maintain this status for a specific duration (e.g., 7 days) to highlight fresh content.
  
**Challengs**
- Providing real-time updates and fast querying for new courses.
  
**Market Benifts:**
-  Highlighting new courses increases their visibility, encouraging students to explore and enroll in fresh content.
-  Efficiently tagging and updating course statuses ensures a smooth and dynamic user experience.
 
  
Time Complexity:
 O(log n)

Space Complexity:O(n).

Here is my Code: [Window_Sliding](Code/Sliding_Window.cpp)

### **15.Multi-Parameter Filtering for Courses**

-**Union-Find Algorithm with BST and B-Trees** TTo enhance the student experience, the platform provides a multi-parameter filtering feature that allows users to filter courses based on various criteria like subject, language, and year of introduction.
  
**Challengs**
- Retrieve courses from the BST and B-Tree based on the user-specified filters.
- Use the Union-Find structure to handle and merge complex queries involving multiple filters.
- Return the filtered list of courses to the user.
  
**Market Benifts:**
-  Allows students to find courses that match their specific interests and preferences, leading to a more personalized learning experience.
-  Helps students discover courses they might not have found otherwise, increasing course enrollment and utilization.
-  Efficient and relevant filtering enhances the overall user experience, making the platform more attractive to students.
 
  
Time Complexity:
O(log n),
Union-Find Operations: Nearly constant time, O(α(n))

Space Complexity:O(n).

Here is my Code:[B-tree](Code/Btree)

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

[11] Time based Window Sliding,https:[https://stackoverflow.com/questions/14355318/time-based-sliding-window](https://stackoverflow.com/questions/14355318/time-based-sliding-window).
