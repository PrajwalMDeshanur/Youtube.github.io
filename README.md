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


**2. Ranked Search Results for Physics Wallah App**
**Description:** 
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
**Description:** 
- **Description:** 
- Max-Heap (Priority Queue) Algorithm: To prioritize and display search results based on relevance and user preferences.

**Limitations**
Max-Heap: While effective for maintaining a priority queue of search results, it requires continual reordering as new results are added or user preferences change, which can impact real-time responsiveness.

**Challengs:**
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
**Description:** 
- Min-Heap: To enhance student engagement and ensure timely delivery of updates.

**Limitations**
Min-Heap: While efficient for prioritizing and managing notifications based on urgency, it requires continuous reordering as priorities change dynamically, potentially impacting performance in real-time scenarios with rapid updates.

**Challengs:**
The primary challenge is creating a ranking algorithm that accurately reflects student preferences and priorities. This requires collecting and analyzing vast amounts of data, such as past enrollments, search history, and interactions with the app. The algorithm also needs to adapt to real-time changes, such as course availability or new teacher ratings.

**Market Benifts:**
- Improved Communication: Timely notifications keep students informed about course updates, deadlines, and new content, enhancing their overall learning experience.
- Increased Engagement: Regular and relevant updates help maintain student interest and participation, leading to higher retention rates.
- Enhanced User Experience: Efficient notification management ensures that students receive updates without delay, contributing to a smooth and responsive user experience.

Time Complexity: O(log n) for insertion and extraction in the Min-Heap.
Space Complexity: O(n) proportional to the number of pending notifications.
 

**4. PW Store for Merchandise, Books, and Student-Related Items**
**Description:** 
- Inventory Management and Personalized Recommendations
Balanced Binary Search Tree (BST) for Inventory Management:
To efficiently manage inventory, the PW Store uses a balanced BST (e.g., AVL Tree, Red-Black Tree). This data structure allows for efficient insertions, deletions, and searches, ensuring the inventory is always accurately maintained and can be queried quickly.

- Collaborative Filtering for Personalized Recommendations:
To enhance the shopping experience, the store employs collaborative filtering algorithms. This approach provides tailored product recommendations based on user preferences and purchase history, helping to increase engagement and sales.

**Limitations**
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



 

