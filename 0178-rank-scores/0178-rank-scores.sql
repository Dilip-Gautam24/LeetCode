SELECT score, (SELECT COUNT(DISTINCT score) FROM Scores s2 WHERE s1.score<=s2.score) AS "rank" FROM Scores s1 order by score desc;
