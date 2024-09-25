import cpp


from Variable v, Function f, Expr access
where f.getFile().getRelativePath() = "variable_test1.c" and
	v.getAnAccess() = access 
select v.getName() as name, v.getADeclarationLocation() as declaration, access.getLocation().getStartLine() as use_location, access.getBasicBlock().getStart().getLocation().getStartLine() as basic_block_start, access.getBasicBlock().getEnd().getLocation().getEndLine() as basic_block_end, v.getAnAssignedValue() as value

