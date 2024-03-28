# Modelling the Pharmacokinetics of Pain Opioids (Methadone, Buprenorphine, Tramadol, and Tapentado)

### Approach
- We use a two compartment model for this analysis to compare the ADME (absorption, distribution, metabolism and excretion) of the drugs highlighted.
- The resulting differential equations are numerically solved using the 4th order Runge-Kutta method.

### Common information about the Opioids.
|Drug|Dosage|Molecular Weight|Method of Delivery|   
|:---|:---|:---|:---|
|Buprenorphine  |0.3mg   |467.64g/mol       |Infusion              |
|Methadone      |2.5-10mg|309.445mg/mol     |Infusion              |
|Tramadol       |50mg    |263.38g/mol       |Infusion              |
|Tapentadol     |50mg    |221.339g/mol      |Gastrointestinal Tract|


- It is also key to gather the distribution rate constants such k~b~, k~e~, and k~t~ from pharmaceutical studies among patients.
- These constants are distribution rates in blood (1st compartments), excretion rate through renal channels and distribution in tissue (2nd Compartment) respectively.

<h3 style="text-align: center;" markdown="1">The Model</h3>

![Two Compartment Model](images/image.png "title")
 
```math
$$\left( \sum_{k=1}^n a_k b_k \right)^2 \leq \left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)$$
```

<h3 style="text-align: center;" markdown="1">Results</h3>

- The results captured observe the dynamics of drug concentration in different compartments over time.

