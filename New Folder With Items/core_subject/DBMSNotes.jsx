import React, { useState } from 'react';
import { ChevronDown, ChevronUp, BookOpen } from 'lucide-react';

const DBMSNotes = () => {
  const [expandedModule, setExpandedModule] = useState(null);

  const modules = {
    "Module 1": [
      { term: "Database System", explanation: "Organized collection of related data stored and accessed electronically. Used to store, retrieve, and manage data efficiently." },
      { term: "Purpose of DBMS", explanation: "To eliminate data redundancy, maintain data consistency, provide data security, enable data sharing, and ensure data integrity." },
      { term: "Data Independence", explanation: "Ability to change database schema at one level without affecting other levels. Two types: Logical (change conceptual schema) and Physical (change storage)." },
      { term: "Relational Database", explanation: "Database that stores data in tables (relations) with rows and columns. Data is related through common fields (keys)." },
      { term: "Database Language", explanation: "DDL (Data Definition Language) - defines structure, DML (Data Manipulation Language) - manipulates data, DCL (Data Control Language) - controls access." },
      { term: "Database System Architecture", explanation: "Three levels: External (user view), Conceptual (logical structure), Internal (physical storage). Provides abstraction and independence." },
      { term: "Database Users", explanation: "End users (naive, sophisticated), Application programmers, Database Administrators (DBA)." },
      { term: "DBA (Database Administrator)", explanation: "Person responsible for managing database - creating schemas, granting access, backup/recovery, performance monitoring." },
      { term: "Data Models", explanation: "Collection of concepts to describe database structure. Types: Hierarchical, Network, Relational, Object-oriented." },
      { term: "Importance of Data Models", explanation: "Provides blueprint for database design, helps in communication, ensures proper organization, reduces complexity." },
      { term: "Building Blocks of Data Model", explanation: "Entities (objects), Attributes (properties), Relationships (connections), Constraints (rules)." },
      { term: "Degrees of Data Abstraction", explanation: "Three levels: Physical (how data is stored), Logical (what data is stored), View (how users see data)." },
      { term: "ER Model", explanation: "Entity-Relationship Model - graphical representation of database structure using entities, attributes, and relationships." },
      { term: "Entity", explanation: "Real-world object with independent existence (e.g., Student, Course, Employee)." },
      { term: "Attribute", explanation: "Property or characteristic of an entity (e.g., Student has Name, Roll No, Age). Types: Simple, Composite, Derived, Multi-valued." },
      { term: "Relationship", explanation: "Association between entities (e.g., Student enrolls in Course). Types: One-to-One, One-to-Many, Many-to-Many." },
      { term: "Constraints in ER Model", explanation: "Rules that restrict data: Cardinality (1:1, 1:N, M:N), Participation (Total - all must participate, Partial - optional)." },
      { term: "ER Diagram (ERD)", explanation: "Visual representation using symbols: Rectangle (Entity), Ellipse (Attribute), Diamond (Relationship), Lines (connections)." },
      { term: "Weak Entity Set", explanation: "Entity that cannot exist without another entity (owner entity). Shown with double rectangle. Has partial key, needs owner's key to identify." }
    ],
    "Module 2": [
      { term: "Relational Model Structure", explanation: "Data organized in tables (relations). Each table has rows (tuples/records) and columns (attributes/fields)." },
      { term: "Domain", explanation: "Set of allowed values for an attribute (e.g., Age domain: 0-100, Gender domain: M/F)." },
      { term: "Relation", explanation: "Table with rows and columns. Each row is a tuple, each column is an attribute. Must have unique name." },
      { term: "Relational Algebra", explanation: "Procedural query language with operations to manipulate relations. Foundation for SQL queries." },
      { term: "Selection (σ)", explanation: "Selects rows that satisfy a condition. σ(condition)(Table). Example: σ(age>20)(Student) - selects students older than 20." },
      { term: "Projection (π)", explanation: "Selects specific columns from table. π(columns)(Table). Example: π(name,age)(Student) - shows only name and age." },
      { term: "Union (∪)", explanation: "Combines tuples from two tables, removes duplicates. Tables must be union-compatible (same attributes)." },
      { term: "Set Difference (−)", explanation: "Returns tuples in first relation but not in second. A − B gives rows in A but not in B." },
      { term: "Cartesian Product (×)", explanation: "Combines every row of first table with every row of second table. Creates all possible combinations." },
      { term: "Rename (ρ)", explanation: "Renames relation or attributes. ρ(newname)(Table) or ρ(newname(attr1,attr2))(Table)." },
      { term: "Join Operations", explanation: "Combines related tuples from two tables. Types: Natural Join, Theta Join, Equi Join, Outer Join (Left, Right, Full)." },
      { term: "Division", explanation: "Finds tuples in one relation that match all tuples in another. Used for 'for all' queries." },
      { term: "Tuple Relational Calculus", explanation: "Nonprocedural query language. Specifies what to retrieve, not how. Uses predicates and quantifiers." },
      { term: "Codd's Rules", explanation: "12 rules for true relational database: Rule 0 (foundation rule), information rule, guaranteed access, null values, dynamic catalog, etc." },
      { term: "UML (Unified Modeling Language)", explanation: "Standard notation for visualizing system design. Includes class diagrams similar to ER diagrams." },
      { term: "Keys in Relational Model", explanation: "Super key (uniquely identifies), Candidate key (minimal super key), Primary key (chosen candidate), Foreign key (references another table)." },
      { term: "Integrity Rules", explanation: "Entity Integrity (primary key cannot be null), Referential Integrity (foreign key must match primary key or be null)." },
      { term: "Normalization", explanation: "Process of organizing data to reduce redundancy and improve integrity. Done through normal forms." },
      { term: "1NF (First Normal Form)", explanation: "Each column has atomic (indivisible) values. No repeating groups. Each row is unique." },
      { term: "2NF (Second Normal Form)", explanation: "Must be in 1NF. No partial dependency (non-key attribute depends on part of composite key)." },
      { term: "3NF (Third Normal Form)", explanation: "Must be in 2NF. No transitive dependency (non-key attribute depends on another non-key attribute)." },
      { term: "BCNF (Boyce-Codd Normal Form)", explanation: "Stronger version of 3NF. For every dependency A→B, A must be a super key." },
      { term: "Multi-valued Dependency", explanation: "When one attribute determines multiple independent sets of values. A ↠ B means A multi-determines B." },
      { term: "4NF (Fourth Normal Form)", explanation: "Must be in BCNF. No multi-valued dependencies. Each multi-valued fact recorded in separate table." }
    ],
    "Module 3": [
      { term: "SQL (Structured Query Language)", explanation: "Standard language for relational databases. Used to create, query, update, and manage databases." },
      { term: "Data Definition Language (DDL)", explanation: "SQL commands to define database structure: CREATE (make table), ALTER (modify table), DROP (delete table), TRUNCATE (remove all data)." },
      { term: "CREATE TABLE", explanation: "Creates new table. Syntax: CREATE TABLE table_name (column1 datatype, column2 datatype, ...)" },
      { term: "ALTER TABLE", explanation: "Modifies existing table. Can ADD, MODIFY, or DROP columns. Example: ALTER TABLE student ADD email VARCHAR(50)" },
      { term: "DROP TABLE", explanation: "Deletes entire table including structure and data. Syntax: DROP TABLE table_name" },
      { term: "Data Manipulation Language (DML)", explanation: "SQL commands to manipulate data: INSERT (add data), UPDATE (modify data), DELETE (remove data), SELECT (retrieve data)." },
      { term: "INSERT Statement", explanation: "Adds new rows. Syntax: INSERT INTO table_name (col1, col2) VALUES (val1, val2)" },
      { term: "UPDATE Statement", explanation: "Modifies existing data. Syntax: UPDATE table_name SET col1=val1 WHERE condition" },
      { term: "DELETE Statement", explanation: "Removes rows. Syntax: DELETE FROM table_name WHERE condition" },
      { term: "SELECT Statement", explanation: "Retrieves data. Syntax: SELECT columns FROM table_name WHERE condition. Can use *, DISTINCT, aliases." },
      { term: "WHERE Clause", explanation: "Filters rows based on condition. Uses operators: =, !=, <, >, <=, >=, AND, OR, NOT, IN, BETWEEN, LIKE" },
      { term: "ORDER BY Clause", explanation: "Sorts results. Syntax: ORDER BY column ASC/DESC. ASC (ascending) is default, DESC for descending." },
      { term: "GROUP BY Clause", explanation: "Groups rows with same values. Used with aggregate functions. Syntax: GROUP BY column_name" },
      { term: "HAVING Clause", explanation: "Filters groups (used after GROUP BY). Like WHERE but for groups. Example: HAVING COUNT(*)>5" },
      { term: "Aggregate Functions", explanation: "COUNT() - counts rows, SUM() - adds values, AVG() - calculates average, MAX() - finds maximum, MIN() - finds minimum." },
      { term: "NULL Values", explanation: "Represents missing/unknown data. Cannot use = with NULL, use IS NULL or IS NOT NULL instead." },
      { term: "Nested Subqueries", explanation: "Query inside another query. Used with IN, EXISTS, ANY, ALL. Example: SELECT * FROM students WHERE id IN (SELECT id FROM passed)" },
      { term: "JOIN Operations", explanation: "Combines rows from multiple tables based on related columns." },
      { term: "INNER JOIN", explanation: "Returns matching rows from both tables. Syntax: SELECT * FROM A INNER JOIN B ON A.key=B.key" },
      { term: "LEFT OUTER JOIN", explanation: "Returns all rows from left table, matching rows from right. NULL if no match in right." },
      { term: "RIGHT OUTER JOIN", explanation: "Returns all rows from right table, matching rows from left. NULL if no match in left." },
      { term: "FULL OUTER JOIN", explanation: "Returns all rows from both tables. NULL where no match." },
      { term: "Set Operators", explanation: "UNION (combines results, removes duplicates), UNION ALL (keeps duplicates), INTERSECT (common rows), MINUS/EXCEPT (difference)." },
      { term: "Transaction Control Language (TCL)", explanation: "COMMIT (saves changes permanently), ROLLBACK (undoes changes), SAVEPOINT (creates checkpoint in transaction)." },
      { term: "Data Dictionary Views", explanation: "System tables storing metadata: USER_TABLES (user's tables), USER_VIEWS (user's views), USER_CONSTRAINTS (constraints)." },
      { term: "Sequences", explanation: "Database object that generates unique numbers automatically. Used for primary keys. CREATE SEQUENCE seq_name START WITH 1 INCREMENT BY 1" },
      { term: "Synonyms", explanation: "Alternate name for database object. CREATE SYNONYM emp FOR employees. Makes queries shorter." },
      { term: "Indexes", explanation: "Database structure to speed up data retrieval. CREATE INDEX idx_name ON table(column). Slows INSERT/UPDATE." },
      { term: "Views", explanation: "Virtual table based on SELECT query. Doesn't store data physically. CREATE VIEW view_name AS SELECT..." },
      { term: "Advantages of Views", explanation: "Data independence (hide complexity), Security (restrict access), Simplify queries (predefine complex joins)." },
      { term: "Updates on Views", explanation: "Possible if view based on single table, no aggregates, no DISTINCT, no GROUP BY. Complex views are read-only." },
      { term: "Triggers", explanation: "Stored programs that automatically execute when specific event occurs (INSERT, UPDATE, DELETE). Used for auditing, validation." },
      { term: "Single-Row Functions", explanation: "Process one row at a time: UPPER(), LOWER(), LENGTH(), SUBSTR(), CONCAT(), ROUND(), TRUNC(), SYSDATE." },
      { term: "Conversion Functions", explanation: "TO_CHAR() (convert to string), TO_NUMBER() (convert to number), TO_DATE() (convert to date)." },
      { term: "Conditional Expressions", explanation: "CASE WHEN condition THEN result ELSE result END. Also DECODE() in Oracle for if-then-else logic." }
    ],
    "Module 4": [
      { term: "PL/SQL", explanation: "Procedural Language extension to SQL. Combines SQL with procedural features like loops, conditions, variables." },
      { term: "PL/SQL Block Structure", explanation: "DECLARE (variables), BEGIN (executable statements), EXCEPTION (error handling), END. DECLARE is optional." },
      { term: "PL/SQL Variables", explanation: "Declared in DECLARE section. Syntax: variable_name datatype := value. Example: emp_name VARCHAR2(50) := 'John'" },
      { term: "Variable Data Types", explanation: "Scalar (NUMBER, VARCHAR2, DATE, BOOLEAN), Composite (RECORD, TABLE), Reference (%TYPE, %ROWTYPE)." },
      { term: "%TYPE Attribute", explanation: "Inherits datatype from table column. Example: emp_salary employee.salary%TYPE. Ensures consistency." },
      { term: "%ROWTYPE Attribute", explanation: "Declares record variable with structure of entire table row. Example: emp_rec employee%ROWTYPE" },
      { term: "Executable Statements", explanation: "Written between BEGIN and END. Can include SQL statements, assignments, conditions, loops, procedure calls." },
      { term: "IF-THEN-ELSE", explanation: "Conditional execution. IF condition THEN statements ELSIF condition THEN statements ELSE statements END IF;" },
      { term: "CASE Statement", explanation: "Multi-way branch. CASE variable WHEN value1 THEN stmt1 WHEN value2 THEN stmt2 ELSE stmt_else END CASE;" },
      { term: "LOOP", explanation: "Basic loop. LOOP statements EXIT WHEN condition; END LOOP; Continues until EXIT condition true." },
      { term: "WHILE Loop", explanation: "WHILE condition LOOP statements END LOOP; Checks condition before each iteration." },
      { term: "FOR Loop", explanation: "FOR counter IN start..end LOOP statements END LOOP; Iterates specified number of times." },
      { term: "Composite Data Types", explanation: "Collection of multiple values: RECORD (like structure), TABLE (array), VARRAY (variable array)." },
      { term: "RECORD Type", explanation: "User-defined type with multiple fields. TYPE rec_name IS RECORD (field1 type1, field2 type2); Similar to struct." },
      { term: "Cursor", explanation: "Pointer to result set of SELECT query. Used to process query results row by row." },
      { term: "Implicit Cursor", explanation: "Automatically created by Oracle for all SQL statements. Attributes: SQL%FOUND, SQL%NOTFOUND, SQL%ROWCOUNT." },
      { term: "Explicit Cursor", explanation: "User-defined cursor. Steps: DECLARE cursor, OPEN cursor, FETCH rows, CLOSE cursor." },
      { term: "Cursor Attributes", explanation: "%FOUND (TRUE if fetch successful), %NOTFOUND (TRUE if no row fetched), %ROWCOUNT (number of rows), %ISOPEN (TRUE if cursor open)." },
      { term: "Cursor FOR Loop", explanation: "Automatic open, fetch, close. FOR record IN cursor_name LOOP statements END LOOP;" },
      { term: "Exception Handling", explanation: "Handles runtime errors. EXCEPTION WHEN exception_name THEN error_handling_statements END;" },
      { term: "Predefined Exceptions", explanation: "NO_DATA_FOUND (SELECT returns no rows), TOO_MANY_ROWS (SELECT returns multiple rows), ZERO_DIVIDE (division by zero)." },
      { term: "User-Defined Exceptions", explanation: "Declare in DECLARE section, RAISE in code. Example: invalid_salary EXCEPTION; RAISE invalid_salary;" },
      { term: "Stored Procedures", explanation: "Named PL/SQL block stored in database. CREATE PROCEDURE proc_name (params) IS BEGIN statements END; Called using EXECUTE." },
      { term: "Procedure Parameters", explanation: "IN (input, default), OUT (output), IN OUT (both). Example: (emp_id IN NUMBER, emp_name OUT VARCHAR2)" },
      { term: "Stored Functions", explanation: "Like procedure but returns value. CREATE FUNCTION func_name (params) RETURN datatype IS BEGIN RETURN value; END;" },
      { term: "Physical Storage Media", explanation: "Cache (fastest, volatile), Main memory (fast, volatile), Flash memory (fast, non-volatile), Magnetic disk (large, non-volatile), Tape (backup)." },
      { term: "Magnetic Disk", explanation: "Secondary storage with rotating platters. Has tracks, sectors, cylinders. Access time = seek time + rotational delay + transfer time." },
      { term: "Flash Storage (SSD)", explanation: "Solid State Drive - no moving parts. Faster than magnetic disk, more expensive, limited write cycles." },
      { term: "RAID (Redundant Array of Independent Disks)", explanation: "Multiple disks for reliability/performance. RAID 0 (striping), RAID 1 (mirroring), RAID 5 (striping with parity)." },
      { term: "File Organization", explanation: "How records stored in file. Types: Heap (unordered), Sequential (sorted), Hashing (hash function)." },
      { term: "Record Organization", explanation: "Fixed-length records (same size) or Variable-length records (different sizes with delimiters/length fields)." },
      { term: "Indexing", explanation: "Data structure to speed up retrieval. Maps search key to record location. Types: Ordered (B+ tree), Hash (hash function)." },
      { term: "Ordered Indices", explanation: "Index entries sorted by search key. Types: Primary (on ordering key), Secondary (on non-ordering key), Clustering (on non-key)." },
      { term: "B+ Tree Index", explanation: "Balanced tree structure. All data in leaf nodes, internal nodes for navigation. Efficient for range queries. Height log(n)." },
      { term: "Static Hashing", explanation: "Hash function maps key to bucket. Fixed number of buckets. Problem: overflow chains, needs rehashing for growth." },
      { term: "Dynamic Hashing", explanation: "Grows/shrinks with data. Types: Extendible hashing (directory-based), Linear hashing (sequential split). No overflow." },
      { term: "Query Processing Overview", explanation: "Steps: Parse query → Translate to relational algebra → Optimize → Execute → Return results." },
      { term: "Measures of Query Cost", explanation: "Number of disk I/O operations (dominant cost), CPU time, Network communication cost. Goal: minimize total cost." },
      { term: "Cost-Based Optimization", explanation: "Uses statistics (table size, index info) to estimate cost of different execution plans. Chooses plan with lowest cost." },
      { term: "Heuristic Optimization", explanation: "Uses rules without cost calculation. Examples: Do selection early, do projection early, combine operations. Fast but not always optimal." }
    ],
    "Module 5": [
      { term: "Transaction", explanation: "Logical unit of work with one or more operations. Either all execute or none (atomicity). Example: bank transfer (debit + credit)." },
      { term: "ACID Properties", explanation: "Atomicity (all or nothing), Consistency (valid state to valid state), Isolation (concurrent transactions don't interfere), Durability (committed changes permanent)." },
      { term: "Atomicity", explanation: "Transaction executes completely or not at all. If failure occurs, rollback to previous state. No partial transactions." },
      { term: "Consistency", explanation: "Database remains in consistent state before and after transaction. All integrity constraints satisfied." },
      { term: "Isolation", explanation: "Concurrent transactions execute as if running sequentially. One transaction's intermediate state not visible to others." },
      { term: "Durability", explanation: "Once transaction commits, changes are permanent even if system crashes. Changes survive failures." },
      { term: "Transaction States", explanation: "Active (executing), Partially Committed (final statement executed), Committed (successful completion), Failed (cannot proceed), Aborted (rolled back)." },
      { term: "Transaction Operations", explanation: "BEGIN (start transaction), READ/WRITE (access data), COMMIT (make changes permanent), ROLLBACK/ABORT (undo changes)." },
      { term: "Implementation of Isolation", explanation: "Using locks (prevent conflicting access), timestamps (order transactions), validation (check conflicts at commit)." },
      { term: "Serializability", explanation: "Concurrent execution equivalent to some serial execution. Ensures correctness of concurrent transactions." },
      { term: "Conflict Serializability", explanation: "Schedule equivalent to serial schedule through swapping non-conflicting operations. Check using precedence graph." },
      { term: "View Serializability", explanation: "Schedule produces same final state as serial schedule. Less restrictive than conflict serializability." },
      { term: "Testing Serializability", explanation: "Create precedence graph with transactions as nodes. Add edge if operations conflict. Serializable if no cycles." },
      { term: "Lock-Based Protocols", explanation: "Control concurrent access using locks. Shared lock (read), Exclusive lock (write). Must request before accessing data." },
      { term: "Shared Lock (S)", explanation: "Multiple transactions can hold shared lock on same item. Allows concurrent reads. No writes allowed." },
      { term: "Exclusive Lock (X)", explanation: "Only one transaction can hold exclusive lock. No other lock allowed. For write operations." },
      { term: "Two-Phase Locking (2PL)", explanation: "Growing phase (acquire locks only), Shrinking phase (release locks only). Ensures serializability but may cause deadlock." },
      { term: "Strict Two-Phase Locking", explanation: "Variation of 2PL. Release all locks only after commit/abort. Prevents cascading rollback." },
      { term: "Deadlock", explanation: "Two or more transactions wait for each other indefinitely. Example: T1 locks A waits for B, T2 locks B waits for A." },
      { term: "Deadlock Prevention", explanation: "Avoid deadlock by design: Wait-Die (older waits, younger aborts), Wound-Wait (older aborts younger, younger waits)." },
      { term: "Deadlock Detection", explanation: "Allow deadlock to occur, then detect using wait-for graph. If cycle found, abort victim transaction." },
      { term: "Deadlock Recovery", explanation: "Select victim transaction (minimum cost) and abort it. Other transactions can now proceed." },
      { term: "Multiple Granularity", explanation: "Lock at different levels: Database, Table, Page, Row. Intention locks (IS, IX) prevent conflicts between levels." },
      { term: "Timestamp-Based Protocols", explanation: "Each transaction gets unique timestamp. Access data based on timestamp order. No locks needed." },
      { term: "Timestamp Ordering", explanation: "Transaction with earlier timestamp executes first. Read/Write timestamps maintained for each data item. Ensures serializability." },
      { term: "Two-Phase Commit Protocol", explanation: "Ensures all sites commit or all abort in distributed database. Phase 1: Voting (prepare/abort), Phase 2: Decision (commit/abort)." },
      { term: "System Recovery", explanation: "Restore database to consistent state after failure. Uses log file with before/after images of data." },
      { term: "Failure Classification", explanation: "Transaction failure (logic error, abort), System crash (power failure, loses volatile storage), Disk failure (head crash, loses non-volatile storage)." },
      { term: "Recovery and Atomicity", explanation: "Use log for undo (rollback uncommitted) and redo (reapply committed). Ensures atomicity after failure." },
      { term: "Log-Based Recovery", explanation: "Sequential file recording all database modifications. Each log record: Transaction ID, Data item, Old value, New value." },
      { term: "Immediate Database Modification", explanation: "Write changes to disk before commit. Use log to undo uncommitted transactions after crash." },
      { term: "Deferred Database Modification", explanation: "Write changes to disk only after commit. Use log to redo committed transactions after crash." },
      { term: "Checkpointing", explanation: "Periodically save database state. During recovery, only process transactions after last checkpoint. Reduces recovery time." },
      { term: "UNDO Operation", explanation: "Restore data item to old value from log. Used for uncommitted transactions during recovery." },
      { term: "REDO Operation", explanation: "Set data item to new value from log. Used for committed transactions during recovery." },
      { term: "Recovery Algorithm", explanation: "After crash: Scan log backward for UNDO list (uncommitted), forward for REDO list (committed). Apply UNDO then REDO operations." },
      { term: "Write-Ahead Logging (WAL)", explanation: "Log record must be written to stable storage before actual data modification. Ensures recoverability." },
      { term: "Shadow Paging", explanation: "Alternative to logging. Maintain current and shadow page tables. Make shadow current only after commit. No UNDO/REDO needed." }
    ]
  };

  const toggleModule = (moduleName) => {
    setExpandedModule(expandedModule === moduleName ? null : moduleName);
  };

  return (
    <div className="min-h-screen bg-gradient-to-br from-blue-50 to-indigo-100 p-4">
      <div className="max-w-6xl mx-auto">
        <div className="bg-white rounded-lg shadow-lg p-6 mb-6">
          <div className="flex items-center gap-3 mb-4">
            <BookOpen className="w-8 h-8 text-indigo-600" />
            <h1 className="text-3xl font-bold text-gray-800">DBMS Exam Notes</h1>
          </div>
          <p className="text-gray-600 mb-2">Complete coverage of all 5 modules • Simple explanations • Exam-focused</p>
          <p className="text-sm text-indigo-600 font-semibold">Click on any module to expand/collapse notes</p>
        </div>

        {Object.entries(modules).map(([moduleName, content]) => (
          <div key={moduleName} className="bg-white rounded-lg shadow-md mb-4 overflow-hidden">
            <button
              onClick={() => toggleModule(moduleName)}
              className="w-full px-6 py-4 bg-indigo-600 hover:bg-indigo-700 text-white font-semibold text-left flex items-center justify-between transition-colors"
            >
              <span className="text-lg">{moduleName} ({content.length} topics)</span>
              {expandedModule === moduleName ? (
                <ChevronUp className="w-6 h-6" />
              ) : (
                <ChevronDown className="w-6 h-6" />
              )}
            </button>
            
            {expandedModule === moduleName && (
              <div className="overflow-x-auto">
                <table className="w-full">
                  <thead className="bg-gray-100 border-b-2 border-indigo-300">
                    <tr>
                      <th className="px-6 py-3 text-left text-sm font-bold text-gray-700 w-1/3">
                        Term / Topic / Concept
                      </th>
                      <th className="px-6 py-3 text-left text-sm font-bold text-gray-700 w-2/3">
                        Explanation (Easy to Remember)
                      </th>
                    </tr>
                  </thead>
                  <tbody>
                    {content.map((item, index) => (
                      <tr
                        key={index}
                        className={`border-b ${index % 2 === 0 ? 'bg-white' : 'bg-gray-50'} hover:bg-indigo-50 transition-colors`}
                      >
                        <td className="px-6 py-4 text-sm font-semibold text-indigo-700">
                          {item.term}
                        </td>
                        <td className="px-6 py-4 text-sm text-gray-700 leading-relaxed">
                          {item.explanation}
                        </td>
                      </tr>
                    ))}
                  </tbody>
                </table>
              </div>
            )}
          </div>
        ))}

        <div className="bg-green-50 border-l-4 border-green-500 rounded-lg p-6 mt-6">
          <h2 className="text-xl font-bold text-green-800 mb-3">📝 Exam Tips</h2>
          <ul className="space-y-2 text-sm text-green-900">
            <li>• Focus on definitions - they carry easy marks</li>
            <li>• Learn SQL syntax and PL/SQL structure thoroughly</li>
            <li>• Practice ER diagrams and normalization problems</li>
            <li>• Understand ACID properties and transaction states clearly</li>
            <li>• Remember all types: joins, keys, normal forms, locks</li>
            <li>• Practice writing short programs for cursors and triggers</li>
            <li>• Revise this table 2-3 times before exam for confidence</li>
          </ul>
        </div>

        <div className="bg-blue-50 border-l-4 border-blue-500 rounded-lg p-6 mt-4">
          <h2 className="text-xl font-bold text-blue-800 mb-3">✅ How to Use These Notes</h2>
          <ul className="space-y-2 text-sm text-blue-900">
            <li>• Read each module once completely</li>
            <li>• Focus on "Term" column first - these are keywords</li>
            <li>• Understand explanations in your own words</li>
            <li>• Write definitions on paper 2-3 times</li>
            <li>• Connect related topics (e.g., Normalization forms, Transaction properties)</li>
            <li>• Before exam, read all 5 modules in one sitting</li>
          </ul>
        </div>
      </div>
    </div>
  );
};

export default DBMSNotes;