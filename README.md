# PW-An Online Education Platform Portfolio
#### PW's Smart Data Structures: Enhancing Quality Education
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
<dd>Education Platform:PW</dd>
</dl>

* * *

> A step towards enhancing PW's service.

This page hosts:

**1. Introduction**

**2. Need of Portfolio**

**3. Objectives**

**4. Business Use Cases**

**5. References**

# Introduction
Implementation of efficient Datastructure and Algorithm in enhancing of students experience.
The advent of online education has changed the entire conventional process of learning. It made the students learn anything sitting at any corner across the country. Pandemic brought coaching institutions to teach students in the online domain. This brought great flexibility to the learning process and shortened the learning gap between the students.Since the pandemic, many online learning platforms have opened and offer various online courses from classes 6 to 12, IIT-JEE, NEET, etc.It eases the process of learning & understanding.

The sector that molds future generations is the education sector. By 2025, it is expected to grow to a $7 trillion worldwide business. The COVID-19 pandemic’s disruption sparked the growth of the ed-tech industry, which makes use of digital resources to deliver inclusive, interesting, and customized education. About $4 billion in private investment has been made in India’s ed-tech sector during the last five years. In the next ten years, it is expected to grow to be a $30 billion sector that supports and enhances traditional classroom teaching methods.
By using advanced algorithmic techniques and innovative data structures, this project aims to propose solutions to real-world business challenges. From giving a better approach for doubts and queries of students to improvision recommendation of courses.


# Why Portfolio
The portfolio bridges academic concepts with practical applications, showcasing the ability to apply theoretical knowledge from DSA and APS courses to real-world challenges.It highlights not only the capability to solve practical problems but also a commitment to advancing the quality and effectiveness of the services, making it a valuable asset for educational innovation and professional growth in the education sector.Enhancing features such as personalized learning pathways, content recommendations, and performance analytics can significantly improve student engagement and satisfaction. 

# Objectives
**1.** Applying theoretical concepts from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) course to practical, real-world problems within the PW platform. 

**2.** Addressing specific business challenges faced by PW through the application of algorithmic problem solving.

**3.** Improving data processing and analytics to provide valuable insights to PW's users for recommendation of courses.

**4.** Introduction of effective and optimal algorithms to already existing algorithm.

## Business Use Cases

### **1.Search Completion or suggestion in PW App**

- The app delivers real-time search suggestions as students input queries, including course names, teacher names, and specific topics. It considers user preferences, past interactions, and academic trends to streamline search and enhance decision-making during peak study times.Algoritm used is Trie and Inverted Index/


**Limitations**

Hash Table: While providing O(1) average time complexity for lookups, hash tables do not support efficient prefix-based search required for real-time suggestions.
Simple List: Requires O(n) time complexity for each search, making it inefficient for real-time applications with a large dataset.

**Challengs:**

- Database Management: Efficiently managing a vast and evolving database of courses, teachers, and educational content.
- Query Handling: Handling diverse user queries including typos, abbreviations, and varying specificity levels.
- Relevance Balancing: Balancing broad suggestions with relevance to student preferences and academic needs.
- 
**Market Benifts:**
  
- Enhanced User Engagement: Swift access to desired courses and teachers boosts satisfaction and encourages frequent app usage.
- Increased User Satisfaction: Personalized suggestions improve user experience and loyalty.
- Exploratory Learning: Encourages exploration of new courses and topics, enriching overall learning experiences.

Time Complexity: O(m) where m is the length of the search query.
Space Complexity: O(ALPHABET_SIZE * m) where ALPHABET_SIZE is the number of possible characters.
Inverted Index (Keyword Searches):
Time Complexity: O(1) on average for keyword lookups.
Space Complexity: O(n * m) where n is the number of documents and m is the average length of documents.

**2. Ranked Search Results for Physics Wallah App**

- Max-Heap (Priority Queue) Algorithm: To prioritize and display search results based on relevance and user preferences.

**Limitations and Challengs:**
Max-Heap: While effective for maintaining a priority queue of search results, it requires continual reordering as new results are added or user preferences change, which can impact real-time responsiveness.

- Ranking Algorithm: Accurately reflecting student preferences and adapting to real-time changes.
- Delivery Assurance: Ensuring search results are timely and efficiently managed.
- Scalability: Handling large volumes of search queries as user base grows.
  
**Market Benifts:**
  
- Improved Communication: Keeps students informed about updates, deadlines, and new content.
- Increased Engagement: Maintains interest and participation, leading to higher retention.
- Enhanced User Experience: Ensures prompt delivery of relevant search results for a smooth user experience.

Time Complexity: O(log n) for insertion and extraction in the Min-Heap.
Space Complexity: O(n) proportional to the number of pending notifications.
 

**3. Real-Time Notifications**

- Min-Heap: To enhance student engagement and ensure timely delivery of updates.

**Limitations and Challengs:**
Min-Heap: While efficient for prioritizing and managing notifications based on urgency, it requires continuous reordering as priorities change dynamically, potentially impacting performance in real-time scenarios with rapid updates.

The primary challenge is creating a ranking algorithm that accurately reflects student preferences and priorities. This requires collecting and analyzing vast amounts of data, such as past enrollments, search history, and interactions with the app. The algorithm also needs to adapt to real-time changes, such as course availability or new teacher ratings.

**Market Benifts:**
- Improved Communication: Timely notifications keep students informed about course updates, deadlines, and new content, enhancing their overall learning experience.
- Increased Engagement: Regular and relevant updates help maintain student interest and participation, leading to higher retention rates.
- Enhanced User Experience: Efficient notification management ensures that students receive updates without delay, contributing to a smooth and responsive user experience.

Time Complexity: O(log n) for insertion and extraction in the Min-Heap.
Space Complexity: O(n) proportional to the number of pending notifications.
 

**4. PW Store for Merchandise, Books, and Student-Related Items**

- Inventory Management and Personalized Recommendations
Balanced Binary Search Tree (BST) for Inventory Management:
To efficiently manage inventory, the PW Store uses a balanced BST (e.g., AVL Tree, Red-Black Tree). This data structure allows for efficient insertions, deletions, and searches, ensuring the inventory is always accurately maintained and can be queried quickly.

- Collaborative Filtering for Personalized Recommendations:
To enhance the shopping experience, the store employs collaborative filtering algorithms. This approach provides tailored product recommendations based on user preferences and purchase history, helping to increase engagement and sales.

**Limitations and Challengs**
- Hash Table for Inventory Management: While hash tables provide O(1) average time complexity for insertions and lookups, they are not suitable for range queries, which are essential for managing inventory levels and filtering items based on price or category.
- Simple List for Personalized Recommendations: A simple list would require O(n) time complexity for searching and filtering recommendations, making it inefficient for real-time use with a large number of users and items.

**Market Benifts:**
- Enhanced Shopping Experience: Seamless and intuitive shopping increases customer satisfaction and sales.
- Improved Inventory Management: Efficient tracking reduces stockouts and overstock situations.
- Personalized Recommendations: Tailored suggestions based on user behavior increase average order value and loyalty.

**Complexity Analysis**
- Balanced Binary Search Tree (BST):
  
Time Complexity: O(log n) for insertions, deletions, and searches.
Space Complexity: O(n).

- Collaborative Filtering:

Time Complexity: O(mn) for matrix factorization, where m is the number of users and n is the number of items.

Space Complexity: O(mn).


**5. Real-Time Course Progress Tracking**

- Segment Tree: The platform tracks students' course progress in real-time, providing timely insights and updates on completed and pending lessons. This allows both students and educators to monitor progress accurately and make data-driven decisions.
**Limitations and Challengs**

- Real-Time Updates: Ensuring progress data is updated promptly as students complete lessons.
- Data Aggregation: Efficiently aggregating and summarizing progress across multiple courses.
- Scalability: Managing progress tracking for a large and growing number of students.
  
**Market Benifts:**
- Enhanced User Experience: Provides students with timely feedback on their progress, keeping them motivated.
- Improved Learning Outcomes: Helps students and educators identify areas needing attention, ensuring timely interventions.
- Data-Driven Insights: Allows educators to make informed decisions based on accurate progress data.

Time Complexity: O(log n) for range queries and updates.
Space Complexity: O(n).
 

**6. Efficient Resource Allocation for Online Classes**

- Knapsack Problem Algorithm: The platform allocates resources such as bandwidth, server capacity, and tutor availability for online classes to ensure a smooth and efficient learning experience for students.
  
**Limitations and Challengs**

- Greedy Algorithm: May not provide an optimal solution for resource allocation, especially when dealing with diverse resource types and varying class requirements.
- Resource Optimization: Efficiently allocating limited resources to maximize the number of successful class sessions.
- Real-Time Allocation: Adjusting resource allocation dynamically based on current demand.
- Scalability: Handling increasing resource demands as the number of students and classes grows.

**Market Benifts:**
- Enhanced User Experience: Ensures smooth and uninterrupted online classes.
- Resource Efficiency: Optimizes the use of available resources, reducing operational costs.
- Scalability: Supports a growing number of students and classes without degradation in quality.

Time Complexity: O(nW) where n is the number of classes and W is the total available resources (e.g., bandwidth units).
Space Complexity: O(nW) due to the dynamic programming table used for computing the optimal allocation.
 
**7.Nearby Location Student Profiles Auto-Suggestion**

- K-D Tree: The platform provides auto-suggestions for student profiles based on nearby locations, allowing users to connect with other students in their vicinity for study groups, collaborations, or social interactions.
  
**Limitations and Challengs**

- Efficient Spatial Queries: Managing spatial data efficiently to provide real-time suggestions.
- Scalability: Handling a large and growing number of student profiles.
- Accuracy: Ensuring the accuracy of location data and relevance of suggestions.

**Market Benifts:**
- Enhanced Social Learning: Encourages students to form study groups and collaborate with peers nearby.
- Increased Engagement: Promotes active participation and interaction among students.
- Personalized User Experience: Provides relevant and location-based profile suggestions, enhancing user satisfaction.
  
Time Complexity:
Insertion: O(log n) for inserting a student profile into the K-D Tree.
Nearest Neighbor Search: O(log n) for querying nearby student profiles.
Space Complexity: O(n) proportional to the number of student profiles.

**8.Trending Course Identification**

- Quick Sort: The platform identifies trending courses based on recent enrollments and user interactions, displaying these courses prominently to users. This helps students stay updated with popular courses and aligns the platform's offerings with current trends.
  
**Limitations and Challengs**

- Efficient Data Handling: Managing and sorting the massive volume of course interaction data generated by user enrollments and activity.
- Real-Time Updates: Continuously updating the trending course list as new data points (enrollments and interactions) are added.
- Scalability: Efficiently processing large datasets to ensure the platform remains responsive and up-to-date.
  
**Market Benifts:**

- Increased Engagement: Highlighting trending courses attracts user attention and encourages enrollments.
- Enhanced User Experience: Keeps the platform dynamic and relevant by showcasing popular courses.
- Revenue Growth: Driving more enrollments in trending courses can increase revenue

Time Complexity:
Time Complexity: The average time complexity of Quick Sort is O(n log n), where n is the number of courses.
Space Complexity: The space complexity of Quick Sort is O(log n) for the in-place version, which is needed for the recursion stack.

