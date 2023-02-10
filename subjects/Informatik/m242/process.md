# Ablauf eines Taktes

::: mermaid
flowchart LR
subgraph Fetch
A[eg. ADD AL, imm8]
end
subgraph Decode
B[change to machine Code]
end
subgraph Execute
C[Add imm8 to AL]
end
subgraph Store
D[Save]
end
Fetch --> Decode --> Execute --> Store
:::
